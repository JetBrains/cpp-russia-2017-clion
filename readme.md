# CLion Workshop

This project is created to help you learn about many of the features and productivity enhancements available in [CLion](https://jetbrains.com/clion). While it doesn't cover EVERY feature in CLion, it does give many, many useful tips and tricks to both beginners and long time users.

Each exercise also introduces the keyboard shortcuts that can be used to work with CLion more efficiently. Should you want to see all the shortcuts in one place, check _Help | Keymap Reference_.

## System requirements
* Machine running under MacOS, Linux (64-bit) or Windows (64-bit). [Full requirements](https://www.jetbrains.com/help/clion/requirements-for-clion.html)
* Pre-installed toolchains [Full lists](https://www.jetbrains.com/help/clion/requirements-for-clion.html):
    * GCC and G++ or Clang, for Windows – MinGW(MinGW-w64) or Cygwin
    * Make
* [CLion 2016.3](https://www.jetbrains.com/clion/download/)
* Qt5 libraries

## Getting Started

Simply get a copy of the repo – clone or download straight. You can also use CLion's built-in VCS support and do the following:
* Go to _VCS | Checkout from Version Control | GitHub_
* Paste repository URL: https://github.com/JetBrains/clion-workshop.git
* Select Parent directory to store the project and a short name
* Agree to open the project in CLion right after downloading the repo
* You should provide the path to your Qt5 copy to CMake (e.g. add `-DCMAKE_PREFIX_PATH=/path/to/qt5` to _Settings | Build, execution, deployment | CMake | CMake options_) 

## How the exercises are structured

* `Navigation`: Learn how to navigate around the codebase using CLion, looking at Go To, Find Usages, File Structure, various Hierarchies and more.
* `Documentation`: Learn how to inspect and create new code documentation.
* `Tune your IDE`: Find information about the handful of options and settings to make the IDE match your personal preferences. This covers IDE themes, keymaps, Code Style settings and generated code customizations.
* `Build, Run, Test`: Check exercises to see how you can build, run and test your code in CLion. This covers tests code generation and built-in test runner.
* `Code quality`: Looks at the powerful features CLion provides to help you find and eliminate bugs, by improving the readability of the code, providing  tools for debugging the code and catching possible issues in your code on the fly with the code analysis.
* `Create new code`: Check these exercises to learn how to quickly create new code with CLion and refactor it.
* `Tools`: Learn about useful tools, like CMake, Terminal, External tools, VCS and other languages support (Python and more).

## Open Source

The workshop is Open Source, licensed under the Apache 2 license. If you would like to contribute to the workshop materials, please feel free to fork the repo and send us a pull request. Or if you have a comment, question, or suggestion for improvements, please [raise an issue](https://github.com/JetBrains/cpp-russia-2017-clion/issues).
