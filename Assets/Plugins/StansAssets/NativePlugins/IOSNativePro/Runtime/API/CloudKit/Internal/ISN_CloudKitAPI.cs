using System;

namespace SA.iOS.CloudKit.Internal
{
    interface ISN_CloudKitAPI
    {
        void SaveRecord(ISN_CKRecord record, string databaseType, Action<ISN_CKResult> callback);
        void RemoveRecordByID(ISN_CKRecordID recordID, string databaseType, Action<ISN_CKResult> callback);

        void FetchRecordWithID(ISN_CKRecordID recordID, string databaseType, Action<ISN_CKResult> callback);

        byte[] GetRecordFieldByteData(string fileName);
    }
}
