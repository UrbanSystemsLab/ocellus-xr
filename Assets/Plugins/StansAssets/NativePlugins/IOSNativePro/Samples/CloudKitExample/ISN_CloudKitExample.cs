using System;
using UnityEngine;
using UnityEngine.UI;
using SA.iOS.CloudKit;

public class ISN_CloudKitExample : MonoBehaviour
{

    // This texture we use as data source for our record.
    public Texture2D texture;
    public Text text;

    ISN_CKRecordID m_RecordID;

    /// Here we create and then save record to CloudKit.
    public void SaveRecord() {
        var date = DateTime.Now;
        // First we need to set database that we want to use.
        var database = new ISN_CloudKitContainer().Private;

        // Then we create recordID.
        var ckRecordID = new ISN_CKRecordID("Name - " + date.Millisecond);

        // After this we create record and set up all fields that we want.
        var record = new ISN_CKRecord("TestType", ckRecordID);
        record.AddField("name", "Record Name - "+date.Second);
        record.AddField("date", date);
        record.AddField("image", texture.EncodeToPNG());

        // Then we save this record to chosen database.
        database.SaveRecord(record, callback => {
            if (callback.State == ISN_CKResultType.Success) {
                m_RecordID = ckRecordID;
                text.text = $"We saved this - {ckRecordID.RecordName} record to DB";
            } else if (callback.State == ISN_CKResultType.Error) {
                text.text = $"We have an error at saving this - {ckRecordID.RecordName} record, error - {callback.Description}";
            }
        });
    }

    /// This is an example of how to fetch record from CloudKit.
    public void FetchRecord() {
        // You need to have recordID to fetch some record.
        // Here we try to fetch record that we just save, but you can create new recordID and fetch it.
        if (m_RecordID != null) {
            var database = new ISN_CloudKitContainer().Private;
            database.FetchRecordWithID(m_RecordID, callback => {
                if (callback.State == ISN_CKResultType.Success) {
                    string textString = $"We fetched this record - {m_RecordID.RecordName}.\n";

                    // Record that was fetched you can get from callback result like this below.
                    textString += $"Name field is - {callback.Record.GetStringValue("name")}.\n";
                    textString += $"Date and time field  is - {callback.Record.GetDateTimeValue("date")}.\n";
                    var data = callback.Record.GetDataValue("image");
                    textString += $"We fetched data field, amount of bytes is - {data.Length}.\n";
                    text.text = textString;
                } else {
                    text.text = $"We have an error at fetching this - {m_RecordID.RecordName} record, error - {callback.Description}";
                }
            });
        } else {
            text.text = "We don't have RecordID to fetch, please save some record and then try to fetch one more time.";
        }
    }

    /// This is an example of how to remove record from CloudKit.
    public void RemoveRecord() {
        // As like for fetching you need to have recordID to remove the record.
        // Here we try to remove record that we just save, but you can create new recordID and then remove it.
        if (m_RecordID != null) {
            var database = new ISN_CloudKitContainer().Private;
            database.RemoveRecordByID(m_RecordID, callback => {
                if (callback.State == ISN_CKResultType.Success) {
                    text.text = $"We removed this record {m_RecordID.RecordName} from DB";
                } else if (callback.State == ISN_CKResultType.Error) {
                    text.text = $"We have an error at removing record {callback.Description}";
                }
            });
        } else {
            text.text = "We don't have RecordID to remove, please save some record and then try to fetch one more time.";
        }
    }
}
