# Tune your IDE

## Customize the Code Style settings for your projects
Following coding style guidelines is important from many aspects: readability, maintainability, team, etc. In CLion you can configure the coding style guidelines and then share them with the whole team or place to the Version Control System for other contributors.
* Under _Settings | Editor | Code Style_ you'll find group of settings for each language supported by the IDE
* Select C/C++ and check some options, like:
    * Do you prefer tabs or spaces? Select in _Use tab character_
    * Configure indents for class members, members of the plain structures, visibility keywords
    * Configure when to wrap the long lines in _Wrapping and Braces_ tab

What file extensions do you typically use? _.cpp/.h_, _.cpp/.hpp_, _.cxx/.hxx_?
* Add and move the most often used options to the top in _Settings | Editor | Code Style | C/C++_, _New File Etensions_ tab

_Tip1_ When you change settings that affect code, CLion gives you an immediate preview, highlighting the line affected by the most recent change.

_Tip2_ Select the code, press `Alt+Enter`, select _Adjust code style settings_ and you'll be able to adjust settings applicable to this particular piece of code.

_Tip3_ How about using Google or Qt coding standards on your project? You can inherit the settings from one of the predefined code style. Select _Set from_ in the right upper corner of the settings window and select the preferred style from the list.

### Share settings
Ok, you get the settings configured! Now let's share them with the team!
* Export settings
    * Go to _File | Export Settings_
    * Select if you'd like to export only Code Style settings or smth else as well (for example, live templates or look and feel settings)
    * Export, share, import the resulted _.jar_ file
* Share in VCS
    * Do commit changes via `⌘K` / `Ctrl+K`
    * Under the unversioned files find: _codeStyleSetting.xml_
    * Select and commit it to the repository