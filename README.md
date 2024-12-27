# ZEKAR's dwm.

## Patches applied
- actualfullscreen
- attachbottom
- autostart
- alwayscenter
- push\_no\_master
- resizehere
> ~~ChatGPT~~ **I** added something similar to the resizecorners patch, but made to work with the resizehere patch. No there's no diff file (neither I'm planning on releasing one), but if you want, just look the resizemouse() function.
- savefloats
- smartborders

## Keybinds
**Mod + d**: dmenu.  
**Mod + Enter**: st.  
**Mod + j**: Go down the stack.  
**Mod + k**: Go up the stack.  
**Mod + Shift + j**: Move down the stack.  
**Mod + Shift + k**: Move up the stack.  
**Mod + i**: Increase master.  
**Mod + u**: Decrease master.  
**Mod + h**: Change window size left.  
**Mod + l**: Change window size right.  
**Mod + m**: Set master.  
**Mod + q**: Kill active window.  
**Mod + v**: Toggle floating mode.  
**Mod + f**: Toggle fullscreen.  

_The rest of this file is the default dwm reame_

dwm - dynamic window manager
============================
dwm is an extremely fast, small, and dynamic window manager for X.


Requirements
------------
In order to build dwm you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dwm is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dwm (if
necessary as root):

    make clean install


Running dwm
-----------
Add the following line to your .xinitrc to start dwm using startx:

    exec dwm

In order to connect dwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

    DISPLAY=foo.bar:1 exec dwm

(This will start dwm on display :1 of the host foo.bar.)

In order to display status info in the bar, you can do something
like this in your .xinitrc:

    while xsetroot -name "`date` `uptime | sed 's/.*,//'`"
    do
    	sleep 1
    done &
    exec dwm


Configuration
-------------
The configuration of dwm is done by creating a custom config.h
and (re)compiling the source code.
