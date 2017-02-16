# Tune your IDE

## Customized generated code
In CLion you can create file from templates. For example, a C++ class:
* Select Project view area, press `⌘N` / `Alt+Insert`, type the name for your new class, for example, _MyCLass_, press Ok
* Note, the newly generated files are not empty.

You can customize the generated content under _Settings | Editor | File and Code Templates_. For example, you prefer `#pragma once` at the beginning of your header files. Do the following:
* Open _Settings | Editor | File and Code Templates_
* Select _C++ Class Header_ template
* Add `#pragma once` line to it
* Press 'ok'
* Create one more class (or just a header file) from the template to check the change

Code generation in CLion follows the formatting rules described in _Settings | Editor | Code Style | C/C++_. In addition to general indent, wrapping and braces rules, find some more advanced:
* Check _Code Generation_ tab to tune advanced settings used when CLion generates some code for you. Typical example is prefix for getter/setter – would you like it to be get/set or get_/set_?