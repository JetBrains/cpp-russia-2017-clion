# Build, Run, Test

## Build and Run
There are a few useful shortcuts to build and run your app in CLion:
* Build with `⌘F9` / `Ctrl+F9`
* Run currently selected configuration with `^R` / `Shift+F10`
* Select configuration and run it with `^⌥R` / `Shift+Alt+F10`
* Debug currently selected configuration with `^D` / `Shift+F9`
* Select configuration and debug it with `^⌥D` / `Shift+Alt+F9`

A few more words about configurations:
* When you open this project you may find a few configurations already created. CLion creates a configuration per each CMake target defined in your project. That's why you have _arkan9_(main app configuration) or _arkan9Test_ (unit tests configuration).

_Tip_ If you want CLion to stop currently running executable before launching it again, select _Single instance only_ setting in the configuration settings under _Run | Edit Configurations_