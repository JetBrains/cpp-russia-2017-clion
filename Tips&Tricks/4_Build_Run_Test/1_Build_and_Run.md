# Build, Run, Test

## Build and Run
Let's build and run this game. A few useful shortcuts:
* Build this app with `⌘F9` / `Ctrl+F9`
* Run currently selected configuration with `^R` / `Shift+F10`
* Select configuration and run it with `^⌥R` / `Shift+Alt+F10`
    * Select _arkan9Test_ to run unit tests

A few more words about configurations:
* When you open this project you may find a few configurations already created. CLion creates a configuration per each CMake target defined in your project. That's why you have _arkan9_(main app configuration) or _arkan9Test_ (unit tests configuration).

_Tip_ If you want CLion to stop currently running executable before launching it again, select _Single instance only_ setting in the configuration settings under _Run | Edit Configurations_