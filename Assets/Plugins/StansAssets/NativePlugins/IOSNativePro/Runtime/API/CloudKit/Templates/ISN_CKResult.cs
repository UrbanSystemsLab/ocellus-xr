using System;
using SA.Foundation.Templates;
using UnityEngine;
using StansAssets.Foundation;

namespace SA.iOS.CloudKit
{
    /// <summary>
    /// This type for saving data from ISN_CloudKit callbacks.
    /// </summary>
    [Serializable]
    public class ISN_CKResult: SA_Result
    {
        [SerializeField]
        public string m_state;

        [SerializeField]
        public string m_description;

        /// <summary>
        /// Get description from ISN_CKResult
        /// </summary>
        public string Description => m_description;

        [SerializeField]
        public ISN_CKRecord m_record;

        /// <summary>
        /// Get Record from description.
        /// </summary>
        public ISN_CKRecord Record {
            get {
                if (m_record == null) {
                    m_record = JsonUtility.FromJson<ISN_CKRecord>(m_description);
                }
                return m_record;
            }
        }

        /// <summary>
        /// Get state from ISN_CKResult
        /// </summary>
        public ISN_CKResultType State => EnumUtility.TryParseEnum <ISN_CKResultType> (m_state, out var state) ? state : ISN_CKResultType.Error;
    }
}