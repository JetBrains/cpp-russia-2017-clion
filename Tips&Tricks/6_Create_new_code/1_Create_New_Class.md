# Create new code

In this part let's implement additional functionality to our game – add extra blinking ball.

## Create new class
* Select Project view area, press `⌘N` / `Alt+Insert`, select _C++ class_, type the name for your new class - _BlinkingBall_
* Check _arkanoidLib_ target in CMakeLists.txt file is going to be updated, and then press Ok

## Auto-import
When you start using a symbol that is not yet imported, CLion will search and suggest adding the corresponding include:
* Inherit _BlinkingBall_ from _Ball_
* The file is not missing the include of _Ball.h_ – CLion highlights the _Ball_ symbol and suggest an auto-import
* Use `⌥Enter` / `Alt+Enter` to get _Ball.h_ included automatically
* Add private field _color__ with type _QColor_, add include for \<QColor\> via the auto-import
