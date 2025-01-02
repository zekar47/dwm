#!/bin/sh

### Set resolution
# For my Virtual machine
#xrandr --output Virtual-1 --mode 1920x1080

# For my desktop
xrandr --newmode "1920x1080_240" 583.2 1920 1928 1960 2000 1080 1201 1209 1215 +Hsync -VSync
xrandr --addmode HDMI-1 1920x1080_240
xrandr --output HDMI-1 --mode 1920x1080_240
