
Debian
====================
This directory contains files used to package chncoind/chncoin-qt
for Debian-based Linux systems. If you compile chncoind/chncoin-qt yourself, there are some useful files here.

## chncoin: URI support ##


chncoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install chncoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your chncoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/chncoin128.png` to `/usr/share/pixmaps`

chncoin-qt.protocol (KDE)

