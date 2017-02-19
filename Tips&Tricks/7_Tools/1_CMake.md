# Tools

## CMake
All work in CLion is done within the context of a project, which serves as the basis for coding assistance, bulk refactoring, coding style consistency, and other smart features. CLion uses the CMake project model.

If you are new to CMake we do recommend our [Quick CMake Tutorial](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html).

A few important actions:
* If you need to apply changes in your CMake files, reload the CMake project via _Tools | CMake | Reload CMake Project_
* To drop the values of the Cache variables _Tools | CMake | Reset Cache and Reload project_. This might be useful in several case:
    * Compiler paths changed (_for example, you've installed a new version and the path includes the version number_)
    * Same for a library. CMake's _find_package_ command stores the results in the CMake Cache, so if you installed a new version, you'd better reset the Cache
    * Somehow the CMake structure of the whole project looks broken.

Check if you can rely on CLion when working with CMake:
* Select Project view area, press `⌘N` / `Alt+Insert`, select _C++ class_, type the name for your new class, for example, _MegaBall_
* Note, that CLion suggests you adding a newly created class to the CMake target automatically. Follow the advice
* But what happens if you rename the class? Select _MegaBall.cpp_ in the project view, press `⇧F6` / `Shift+F6` to Rename the file. After you press Enter, and the file is renamed, check the reference in the corresponding _CMakeLists.txt_ file. The name there has also changed!
* Now let's take the risk and delete the file – the corresponding target in _CMakeLists.txt_ will be updated as well!

### Advanced: working with configurations
When you run your program in CLion, you run so called _Build/Run Configuration_. There are two major ways of creating them:
* CLion creates them automatically for each CMake target it finds in your project
* You can create them manually in _Run | Edit Configurations..._ dialog

Another type of configurations is _CMake configurations_:
* When you debug your application, _Debug_ symbols are required. There also could be some information or code that executes only in _Debug_ mode.
* On the contrary, when running performance tests, for example, or uploading a binary to some device, you often need all the _Debug_ symbols striped off, so the mode is set to _Release_.

This is what CMake configurations are for. You can configure any number of CMake configurations under _Settings | Build, Execution, Deployment | CMake_. And then select CMake configuration type for your _Build/Run Configuration_ in _Run | Edit Configurations..._ dialog.
