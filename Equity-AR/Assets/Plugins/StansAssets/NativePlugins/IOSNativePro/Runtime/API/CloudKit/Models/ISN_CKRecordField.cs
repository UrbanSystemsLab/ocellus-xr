using System;
using UnityEngine;
using StansAssets.Foundation;

namespace SA.iOS.CloudKit
{
    /// <summary>
    /// This is field of a record.
    /// It saves and give access to key, type or value of this field.
    /// </summary>
    [Serializable]
    public class ISN_CKRecordField
    {
        [SerializeField]
        public string m_key;

        [SerializeField]
        public string m_value;

        byte[] m_data;

        [SerializeField]
        public string m_type;

        ISN_CKRecordFieldType m_fieldType;

        /// <summary>
        /// Get key of this record field.
        /// </summary>
        public string Key => m_key;

        /// <summary>
        /// Type of value of this field.
        /// </summary>
        public ISN_CKRecordFieldType Type => m_fieldType;

        /// <summary>
        /// Return string value of this field.
        /// </summary>
        public string StringValue => m_value;

        /// <summary>
        /// Return int value of this field.
        /// </summary>
        public int IntValue => int.Parse(m_value);

        /// <summary>
        /// Return DataTime value of this field.
        /// </summary>
        public DateTime DateValue => DateTime.ParseExact(m_value, "dd-MM-yyyy-HH:mm:ss", null);


        /// <summary>
        /// Return CKAsset value of this field.
        /// </summary>
        public ISN_CKAsset CKAssetValue => new ISN_CKAsset(m_value);

        /// <summary>
        /// Return data value of this field as byte array.
        /// </summary>
        public byte[] DataValue {
            get {
                if (m_data == null) {
                    m_data = Internal.ISN_CloudKitLib.Api.GetRecordFieldByteData(m_value);
                }
                return m_data;
            }
        }

        /// <summary>
        /// Creation of CKRecord field.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> Value of this field. </param>
        /// <param name="type"> Type of this field. </param>
        public ISN_CKRecordField(string key, string value, ISN_CKRecordFieldType type) {
            m_key = key;
            m_value = value;
            m_type = type.ToString();
            m_fieldType = type;
            if (type == ISN_CKRecordFieldType.Data) {
                m_data = Internal.ISN_CloudKitLib.Api.GetRecordFieldByteData(m_value);
            }
        }

        /// <summary>
        /// Creation of CKRecord field.
        /// </summary>
        /// <param name="key"> Key for this field. </param>
        /// <param name="value"> Value of this field. Here we set index for pointer for this data. </param>
        /// <param name="data"> This is byte array with data for this field. </param>
        /// <param name="type"> Type of this field. </param>
        public ISN_CKRecordField(string key, int value, byte[] data, ISN_CKRecordFieldType type) {
            m_key = key;
            m_value = value.ToString();
            m_data = data;
            m_type = type.ToString();
            m_fieldType = type;
        }
    }
}

