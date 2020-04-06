# Equity-AR

Unity: 2018.4.13f1  Mapbox SDK: 2.1.1

This is research codes about Mapbox-unity for Equity AR project.

The Equity-AR folder is the original Unity files. The following packages are different Unity packages during the development process.

You can either download the 'Equity-AR' folder to see the lastest version, or download any Unity package that you need.


1. Install Unity2018.4.13f1

To install Unity2018.4.13f1, go to Unity website download Unity hub. https://unity3d.com/get-unity/download 

After login to Unity hub, click the 'ADD' button in Installs tab. Choose 2018.4.13f1 and click Next. If you don't see 2018.4.13f1 in the list, please click the 'long-term support' link. https://unity3d.com/unity/qa/lts-releases?page=2

ATTENTION: If you install from long-term support other than Unity hub, you cannot add modules directly through Unity hub. You need to go to long-term support website to install modules.

In 'long-term support' webpage, find Unity2018.4.13f1 in the list. Download Unity Editor Download Assistant, and follow instructions to install Unity2018.4.13f1. In modules selection, choose IOS build support and Visual Studio for Mac/Windows. 

2. Install lastest version Xcode

To install Xcode, please go to app store to get the Xcode.

3. Open Equity-AR Project

Once you have downloaded Unity2018.4.13f1, you can either download the Equity-AR folder or create a new project and import one of the packages in the Packages folder.

3.1 Open Project by downloading Equity-AR folder

If you downloaded Equity-AR folder, please follow the instruction below to use Unity hub to open it.

In the Unity hub, click 'ADD' button in the Projects tab. Then locate to the Equity-AR folder you just downloaded. After you have added the project, you need to choose the unity version as 2018.4.13f1 and you are good to go. 

3.2 Open Project by importing packages

If you downloaded packages in the Packages folder, please follow the instruction below to import it.

In the Unity hub, click the triangular button besides the 'NEW' button and choose 2018.4.13f1 in the shown list. Then in the new window 'Create a new project with Unity 2018.4.13f1', choose 3D template, name your project and choose your location. You can click the 'CREATE' button now. 

After you opened the new project, the first thing you need to do is to switch building platform to iOS. If you do this later, it will take more time for Unity to process. Go to 'File -> Build Settings...' and click the iOS option on the left. Then, click the 'Switch Platform' at the bottom.

ATTENTION: You must import Mapbox SDK Package first before import the package you downloaded from the Package folder.

After you opened the new project, follow the link below to import Mapbox lastest SDK package. https://www.mapbox.com/install/unity/ 

Once you have successfully installed Mapbox to your Unity, you will see a Mapbox option in the menu bar and an account configuration popup window. You need to go to your Mapbox account and copy your Token to the configuration popup window in Unity. If your Token is correct, the text field will become green and you have successfully setted up Mapbox SDK for your Unity. Next step is to import the package you downloaded from the Packages folder. Same method, go to 'Asset -> Import Package -> Custom Package' and select the package and import. In the file selection popup window, select all and click 'Import'. 

Notice: Some files may not be selected because you have already imported them from Mapbox SDK Package. When the package is imported, you should have errors about ARFoundation.

To make the ARFoundation work correctly, we need to set up Unity. First, go to Window-Package Manager. In the Advanced dropdown, select 'Show preview packages'. Then, you can find 'AR Foundation' in the list. In the version dropdown, select 'All Versions' -> '1.5.0 - preview 6'. Then, click 'Install'. We also need 'ARKit XR Plugin' package to deploy to IOS. Install 'ARKit XR Plugin, 1.0.0 preview 17' by following the same method. Besides, 'ARCore XR Plugin' is for deploying to Android. We don't use Android here so we don't need to install it.

Second, go to 'Edit -> Project Settings...'. In the 'player settings', click the Iphone icon and unfold the 'Other Settings' below. Find the Bundle Identifier and replace your company name and project name. The Bundle Identifier is whatever if it is unique. Find 'Requires ARKit support' and click it. You will notice that it automatically fills the 'Camera Usage Description' and it appears a warning 'ARKit requires iOS 11 or newer. Please set 'Target minimum iOS version' to at least 11.0'. Therefore, type 11 to 'Target minimum iOS version' above. The 'Camera Usage Description' can be changed to anything but cannot be blank. Otherwise the camera on your iphone will not work properly.

4. Biuld and Deploy

You can open the scene you would like to test. In the Project window, go to 'Assets -> Scenes' and open the scene you want. Then, go to 'Files -> Build Settings' and click the 'Add Open Scenes' button. Now you can click the 'Build' button.

Building takes some time. Once you have built the project, you should have a folder with the name you gave it before. Open the 'Unity-iPhone.xcodeproj' file by Xcode. Make sure you have connected your iphone to your Mac. In Xcode, click the play button at the top left corner.

Now you can check the demo on your phone.
