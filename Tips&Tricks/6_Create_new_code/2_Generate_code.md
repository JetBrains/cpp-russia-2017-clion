# Create new code

## Generate missing constructor
Base class _Ball_ doesn't have a default constructor and, since there is no constructor defined for _BlinkingBall_, CLion highlights the code and reporting the error.
* Press `⌥Enter` / `Alt+Enter` and select an option to create constructor that matches base class.
* Now the proper constructor is generated

## Generate getters/setters
* Press `⌘N` / `Alt+Insert` in the class and generate getters and setters

## Override base functions
* Press `^O` / `Ctrl+O` to override a function
* Select _calc_ function to override
* Check the following options:
    * Select _override_ attribute to be inserted
    * Don't generate in-place
* Generate
_Note_, base class function is called in the function body stub
* Before calling a base class function, insert the following code:
`setColor(QColor::fromRgb(qrand() % 256, qrand() % 256, qrand() % 256));`

_Note_, if you decide to type _setColor_ by hands, you may notice a very useful parameter info pop-up, that not only shows all available function signatures and parameters, but also greys out any incompatible signatures, when you start editing actual parameters.
