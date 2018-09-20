# SwiftSupportLibDemo

This repository's purpose is to demonstrate a strange issue which Xcode seems to not handle correctly.  

The setup is to have 2 frameworks in the same workspace, one depends on the other.  The first framework has non-trivial swift code in it while the other framework which depends on it, does not.  

When trying to run unit tests for the second framework, Xcode generates the following output:

2018-09-20 11:32:28.629279-0400 xctest[99030:7421511] The bundle “ModelFrameworkTests” couldn’t be loaded because it is damaged or missing necessary resources. Try reinstalling the bundle.
2018-09-20 11:32:28.629413-0400 xctest[99030:7421511] (dlopen_preflight(/Users/dproskin/Library/Developer/Xcode/DerivedData/SwiftSupportLibDemo-dutldsoirbbioifuykgifylsrdpr/Build/Products/Debug-iphonesimulator/ModelFrameworkTests.xctest/ModelFrameworkTests): Library not loaded: @rpath/libswiftSwiftOnoneSupport.dylib
Referenced from: /Users/dproskin/Library/Developer/Xcode/DerivedData/SwiftSupportLibDemo-dutldsoirbbioifuykgifylsrdpr/Build/Products/Debug-iphonesimulator/UtilityFramework.framework/UtilityFramework
Reason: image not found)
Program ended with exit code: 82

This repo also contains a fix in a separate branch.  The fix seems to be having the dependent framework also pull that library in by having it contain non-trivial swift code.
