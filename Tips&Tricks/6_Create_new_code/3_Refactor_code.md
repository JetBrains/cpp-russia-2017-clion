# Create new code

## Refactor: moves class members to a base class
Assume, that at this point we realize that _color__ should be located in _Ball_ class instead. 

* Place a cursor on _setColor__
* Call refactor this menu to get the full lists of refactorings at the cursor location via `^T` / `Shift+Ctrl+Alt+T`
* Select _Pull Members Up_
* Select _color__ member
* Pay attention some members are highlighted in red – that means they are dependant on the members you are gonna move and needs to be moved as well. So finally we are moving getter, setter and the field itself

Now update _Ball::draw_:
* Use _getColor()_ call instead of simple _Qt::red_
