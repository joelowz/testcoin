#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/chncoin.png
ICON_DST=../../src/qt/res/icons/chncoin.ico
convert ${ICON_SRC} -resize 16x16 chncoin-16.png
convert ${ICON_SRC} -resize 32x32 chncoin-32.png
convert ${ICON_SRC} -resize 48x48 chncoin-48.png
convert chncoin-16.png chncoin-32.png chncoin-48.png ${ICON_DST}

