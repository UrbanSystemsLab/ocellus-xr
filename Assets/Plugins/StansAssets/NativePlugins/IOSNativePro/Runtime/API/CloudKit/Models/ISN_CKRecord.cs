using System;
using UnityEngine;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace SA.iOS.CloudKit 
{
    /// <summary>
    /// An object of key-value pairs that you use to fetch and save your app's data.
    /// Records are the fundamental objects you use to manage data in CloudKit.
    /// You may define any number of record types for your app, with each record type corresponding to a different type of information you need.
    // Within a given record type, you then define one or more fields, each of which has a name and a data value.
    /// </summary>
    [Serializable]
    public class ISN_CKRecord
    {
        [SerializeField]
        public string m_RecordType;

        [SerializeField]
        public string m_RecordName;

        [SerializeField]
        public List<ISN_CKRecordField> m_fields;

        int m_dataElementsAmout = 0;

        ISN_CKRecordID m_recordID;

        List<IntPtr> m_pointers;

        List<int> m_sizeOfData;

        /// <summary>
        /// Get recordType of this record
        /// </summary>
        public string RecordType => m_RecordType;

        /// <summary>
        /// Get recordID of this record.
        /// </summary>
        public ISN_CKRecordID RecordID {
            get {
                if (m_recordID == null) {
                    m_recordID = new ISN_CKRecordID(m_RecordName);
                }
                return m_recordID;
            }
        }

        /// <summary>
        /// Get record fields.
        /// <summary>
        public List<ISN_CKRecordField> Fields => m_fields;

        /// <summary>
        /// Get amount off data elements in this record.
        /// </summary>
        public int DataElementsAmount => m_dataElementsAmout;

        /// <summary>
        /// Get array of pointers to data objects of this record.
        /// </summary>
        public List<IntPtr> Pointers {
            get {
                if (m_pointers == null) {
                    m_pointers = new List<IntPtr>();
                    m_sizeOfData = new List<int>();
                    foreach(ISN_CKRecordField field in m_fields) {
                        if (field.Type == ISN_CKRecordFieldType.Data) {
                            IntPtr pointer = Marshal.AllocHGlobal(field.DataValue.Length);
                            Marshal.Copy(field.DataValue, 0, pointer, field.DataValue.Length);
                            m_pointers.Add(pointer);
                            m_sizeOfData.Add(field.DataValue.Length);
                        }
                    }
                }
                return m_pointers;
            }
        }

        /// <summary>
        /// Get amount of buffer sizes for data fields that you have in this record.
        /// </summary>
        public List<int> DataBufferSize {
            get {
                if (m_sizeOfData == null) {
                    var data = Pointers;
                }
                return m_sizeOfData;
            }
        }

        /// <summary>
        /// Initializes and returns a record using an ID that you provide.
        /// <summary>
        /// <param name"recordType"> 
        /// A string reflecting the type of record that you want to create. 
        /// Define the record types that your app supports, and use them to distinguish between records with different types of data.
        /// This parameter must not be nil or contain an empty string.
        /// Record type names consist of one or more alphanumeric characters and start with a letter.
        /// Type names may include underscore characters if they do not start with that character.
        /// Spaces are not allowed in record type names.
        /// </param>
        /// <param name="recordID">
        /// The ID to assign to the record itself.
        /// When creating the ID, you can specify the zone in which to place the record.
        /// The ID cannot currently be in use by any other record and must not be nil.
        /// </param>
        public ISN_CKRecord(string recordType, ISN_CKRecordID recordID) {
            m_recordID = recordID;
            m_RecordType = recordType;
            m_RecordName = recordID.RecordName;
            m_fields = new List<ISN_CKRecordField>();
        }

        /// Add fields methods.

        /// <summary>
        /// Method for adding field to the record.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> Int value for this field. </param>
        public void AddField(string key, int value) {
            var field = new ISN_CKRecordField(key, value.ToString(), ISN_CKRecordFieldType.Number);
            m_fields.Add(field);
        }

        /// <summary>
        /// Method for adding field to the record.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> String value for this field. </param>
        public void AddField(string key, string value) {
            var field = new ISN_CKRecordField(key, value, ISN_CKRecordFieldType.String);
            m_fields.Add(field);
        }

        /// <summary>
        /// Method for adding field to the record.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> Date value for this field. </param>
        public void AddField(string key, DateTime value) {
            var m_value = value.ToString("dd-MM-yyyy-HH:mm:ss");
            Debug.Log("Time is -"+m_value);
            // var m_value = String.Format("{0}-{1}-{2}-{3}:{4}:{5}", value.Day, value.Month, value.Year, value.Hour, value.Minute, value.Second).ToString();
            var field = new ISN_CKRecordField(key, m_value, ISN_CKRecordFieldType.Date);
            m_fields.Add(field);
        }

        /// <summary>
        /// Method for adding field to the record.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> CKAsset value for this field. </param>
        public void AddField(string key, ISN_CKAsset value) {
            var field = new ISN_CKRecordField(key, value.AssetURL, ISN_CKRecordFieldType.Asset);
            m_fields.Add(field);
        }

        /// <summary>
        /// Method for adding field to the record.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> byte array as value for this field. </param>
        public void AddField(string key, byte[] value) {
            var field = new ISN_CKRecordField(key, m_dataElementsAmout, value, ISN_CKRecordFieldType.Data);
            m_fields.Add(field);
            m_dataElementsAmout += 1;
        }

        /// Get field methods.

        /// <summary>
        /// Method for getting int value for given key.
        /// If we don't have value for given key, this method will return 0.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        public int GetIntValue(string key) {
            foreach(ISN_CKRecordField field in Fields) {
                if (field.Key.Equals(key)) {
                    return field.IntValue;
                }
            }
            return 0;
        }

        /// <summary>
        /// Method for getting string value for given key.
        /// If we don't have value for given key, this method will return empty string.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        public string GetStringValue(string key) {
            foreach(ISN_CKRecordField field in Fields) {
                if (field.Key.Equals(key)) {
                    return field.StringValue;
                }
            }
            return string.Empty;
        }
        
        /// <summary>
        /// Method for getting DataTime value for given key.
        /// If we don't have value for given key, this method will return DateTime.Now.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        public DateTime GetDateTimeValue(string key) {
            foreach(ISN_CKRecordField field in Fields) {
                if (field.Key.Equals(key)) {
                    return field.DateValue;
                }
            }
            return DateTime.Now;
        }

        /// <summary>
        /// Method for getting data value for given key.
        /// If we don't have value for given key, this method will return empty byte array.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        public byte[] GetDataValue(string key) {
            foreach(ISN_CKRecordField field in Fields) {
                if (field.Key.Equals(key)) {
                    return field.DataValue;
                }
            }
            return new byte[0];
        }

        /// <summary>
        /// Method for getting CKAsset value for given key.
        /// If we don't have value for given key, this method will return null.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        public ISN_CKAsset GetAssetValue(string key) {
            foreach(ISN_CKRecordField field in Fields) {
                if (field.Key.Equals(key)) {
                    return field.CKAssetValue;
                }
            }
            return null;
        }
    }
}

