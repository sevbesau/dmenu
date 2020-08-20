dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.

This is my own build pathced with:
 - dmenu-border-4.9.diff
 - dmenu-fuzzymatch-4.9.diff
 - dmenu-grid-4.9.diff
 - dmenu-lineheight-4.9.diff
 - dmenu-mousesupport-4.9.diff
 - dmenu-navhistory-4.6.diff
 - dmenu-password-4.9.diff
 - dmenu-xyw-4.7.diff


Requirements
------------
In order to build dmenu you need the Xlib header files.
for color emoji support you need (aur) libxft-bgra


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.
