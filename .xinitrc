#!/usr/bin/env bash

#Uncomment this line for xscreensaver:
#xscreensaver &

~/.fehbg &

sh ~/Scripts/wal.sh
xrdb -merge ~/.Xresources

# No keyboard beeping
xset b off

#Launch i3 as my window manager:
exec i3
