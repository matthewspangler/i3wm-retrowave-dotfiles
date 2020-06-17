## Important dotfiles:

My custom rice uses i3wm and polybar. I have custom scripts for these in:
.config/i3
.config/polybar

I tried to use i3status for a while, but it didn't meet all my needs, so I disabled it. The config files for this are in:
.config/i3status

The wallpaper is automatically set by calling .fehbg from .xinitrc. The wallpaper I used for this rice can be found here: https://wallpapercave.com/synthwave-wallpapers

I use urxvt as my terminal, and my theme settings are in .Xresources.

My emacs configuration files also contains custom theme that matches my i3wm rice, if you want it.

## Dependencies:

My custom rice uses PyWal (https://github.com/dylanaraps/pywal) to generate a color palette based on the desktop wallpaper which is set with feh.

My GTK2/3 themes are configured to match the Pywal palette using wpgtk (https://github.com/deviantfero/wpgtk).

You will also need to install Polybar.

## Screenshot:
![Alt text](screenshot.jpg?raw=true "Screenshot")
