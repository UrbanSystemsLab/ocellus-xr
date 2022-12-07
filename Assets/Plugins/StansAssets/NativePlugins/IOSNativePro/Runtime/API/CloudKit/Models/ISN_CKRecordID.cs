using UnityEngine;
using System;

namespace SA.iOS.CloudKit 
{
    /// <summary>
    /// An object that uniquely identifies a record in a database.
    /// </summary>
    [Serializable]
    public class ISN_CKRecordID
    {
        [SerializeField]
        string m_recordName;
        [SerializeField]
        string m_zoneID;

        /// <summary>
        /// Get recordName of this recordID.
        /// </summary>
        public string RecordName => m_recordName;
        
        /// <summary>
        /// The ID of the zone containing the record.
        /// </summary>
        public string ZoneId => m_zoneID;

        /// <summary>
        /// Creates a record ID in the default zone.
        /// </summary>
        /// <param name="recordName">
        /// Name for this recordID.
        /// </param>
        public ISN_CKRecordID(string recordName) {
            m_recordName = recordName;
            m_zoneID = "default";
        }
    }
}

