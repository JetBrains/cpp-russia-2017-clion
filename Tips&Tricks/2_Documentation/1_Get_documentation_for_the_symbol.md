# Documentation

## What is there under caret?
When you meet a new code base, various tools helping you to know the code better are useful. CLion allows you to view the documentation for the selected class, function, variable, parameter, or macro.

### Quick Documentation
* Go to _GameWidget.cpp_ file (get there quickly with `⇧⌘O` / `Shift+Ctrl+N` and type _gwc_)
* Place a caret on a _GameWidget_ class name
* Press `F1` / `Ctrl+Q` and learn some details about the class
    * You can see that it's inherited from the _QWidget_, click on it to see the details of the class and navigate through the hierarchy via next/back arrows/buttons
    * _TODO_ comment is also included
* To know function signature, place a caret on a function and invoke Quick Documentation
    * Go to _applyCollision_ symbol in _GameWidget.cpp_
    * Use `F1` / `Ctrl+Q` to see the documentation
    * Note, some additional information is shown in the pop-up - Doxygen comment preview. That means that if the code is properly documented you can read the documentation while going through the code base (without invoking Doxygen docs generation)

### Infer types
Modern C++ allows you to avoid type names in many situations where they are excessive. However, reading the code is much easier when you can understand the type of the variable under caret.

* Go to _getCollisionWithBrick_ function definition in _Collisions.cpp_ via `⌥⌘O` / `Shift+Ctrl+Alt+N` and type _gcwb_
* Two local variable are defined and used in the function body: _ballBB_ and _inters_. What are they? Call Quick Documentation with `F1` / `Ctrl+Q` to learn the type of the variables declared as _auto_

### Get macros expansion
Preprocessor macros can be tricky, defined one through another, so it's sometimes difficult to guess the final substitution. CLion can help you here:

* Go to _GameWidget_ constructor definition in GameWidget.cpp (use `⌥⌘O` / `Shift+Ctrl+Alt+N` to navigate to symbol and type _gwi_, select function definition from the list)
* _WND_HEIGHT_ and _WND_WIDTH_ macros are used in the code. Place a caret on _WND_HEIGHT_ and call Quick Documentation with `F1` / `Ctrl+Q` – macro definition and full expansion will be shown to you

