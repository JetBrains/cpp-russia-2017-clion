# Navigation

## View hierarchies and file structure
Get a bird’s eye view of the whole project with Calls, Types and Includes hierarchies. This could also help with better understanding of the libraries structure.

* Go to _GameWidget.cpp_
* To view the outline of the file call file structure via `⌘7` / `Alt+7` (to open in a separate pop-up use `⌘F12` / `Ctrl+F12`)
    * Sort by type
    * Sort alphabetically
    * Turn _on_ autoscroll to source, select an item in the structure view – CLion will navigate you in the editor
    * Turn _on_ autoscroll from source, select an item in the editor – CLion will navigate you in the Structure view
    * Select structure view, start typing _paint_ and see matching items highlighted
* To view the hierarchy of the file includes, use `⌥⇧H` / `Ctrl+Alt+H`
    * Use it to review the Qt Library includes structure
    * Try autoscroll to source
* Place a cursor on _GameWidget_ class name, use `^H` / `Ctrl+H` to view the Types hierarchy.
    * Change to supertypes hierarchy
    * Use it to understand how the Qt types inherit each other
* Place a cursor on _processCollisions_, use `^⌥H` / `Ctrl+Alt+H` to view Call hierarchy
    * Switch between Caller/Callee methods Hierarchy