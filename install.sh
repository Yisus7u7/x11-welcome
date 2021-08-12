#!/bin/bash
pkg upgrade
pkg install clang qt5-qtbase qt5-qttools -y
rm $PREFIX/bin/x11-welcome
rm $PREFIX/share/applications/x11-welcome.desktop
qmake
make
cp x11-welcome $PREFIX/bin
cp x11-welcome.desktop $PREFIX/share/applications
