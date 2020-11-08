
#if UNITY_IPHONE && !UNITY_EDITOR && CLOUDKIT_API_ENABLED
#define API_ENABLED
#endif

using System;
using SA.iOS.Utilities;
using UnityEngine;
#if API_ENABLED
using System.Runtime.InteropServices;
#endif

namespace SA.iOS.CloudKit.Internal
{
    /// <summary>
    /// This is native api for communications with CloudKit.
    /// </summary>
    class ISN_CloudKitNativeAPI: ISN_Singleton<ISN_CloudKitNativeAPI>, ISN_CloudKitAPI
    {
#if API_ENABLED
        [DllImport("__Internal")]
        static extern void _ISN_CK_SaveRecord(string data, string databaseType, IntPtr[] pointers, int[] dataSize, int pointersAmout, IntPtr callback);

        [DllImport("__Internal")]
        static extern void _ISN_CK_RemoveRecordByName(string recordName, string databaseType, IntPtr callback);

        [DllImport("__Internal")]
        static extern void _ISN_CK_FetchRecordByName(string recordName, string databaseType, IntPtr callback);

        [DllImport("__Internal")]
        static extern IntPtr _ISN_GetData(string fileName, out int size);
#endif

        public void SaveRecord(ISN_CKRecord record, string databaseType, Action<ISN_CKResult> callback) {
#if API_ENABLED
                var pointers = record.Pointers.ToArray();
                var dataBufferSize = record.DataBufferSize.ToArray();
                var data = JsonUtility.ToJson(record);
                _ISN_CK_SaveRecord(data, databaseType, pointers, dataBufferSize, record.DataElementsAmount, ISN_MonoPCallback.ActionToIntPtr(callback));
#endif
        }

        public void RemoveRecordByID(ISN_CKRecordID recordID, string databaseType, Action<ISN_CKResult> callback) {
#if API_ENABLED
                _ISN_CK_RemoveRecordByName(recordID.RecordName, databaseType, ISN_MonoPCallback.ActionToIntPtr(callback));
#endif
        }

        public void FetchRecordWithID(ISN_CKRecordID recordID, string databaseType, Action<ISN_CKResult> callback) {
#if API_ENABLED
                _ISN_CK_FetchRecordByName(recordID.RecordName, databaseType, ISN_MonoPCallback.ActionToIntPtr(callback));
#endif
        }

        public byte[] GetRecordFieldByteData(string fileName) {
#if API_ENABLED
                var size = 0;
                var pointer = _ISN_GetData(fileName, out size);

                var data = new byte[size];
                Marshal.Copy(pointer, data, 0, size);
                return data;
#else
                return new byte[0];
#endif
        }
    }
}
