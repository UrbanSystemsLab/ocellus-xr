using System;

namespace SA.iOS.CloudKit
{
    /// <summary>
    /// A CloudKitContainer object provides access to an app container, and through the app container, access to its databases.
    /// <summary>
    public class ISN_CloudKitContainer
    {

        /// <summary>
        /// The database containing the data shared by all users.
        /// </summary>
        public ISN_CKDatabase Public => new ISN_CKDatabase(ISN_CKDatabaseType.Public);


        /// <summary>
        /// The database containing shared records accepted by the current user.
        /// </summary>
        public ISN_CKDatabase Shared => new ISN_CKDatabase(ISN_CKDatabaseType.Shared);
        
        /// <summary>
        /// The database containing the user’s private data.
        /// </summary>
        public ISN_CKDatabase Private => new ISN_CKDatabase(ISN_CKDatabaseType.Private);
    }
}
