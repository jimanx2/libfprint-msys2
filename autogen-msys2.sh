#!/bin/sh

export PATH=/mingw32/bin/:$PATH PKG_CONFIG_PATH=/mingw32/lib/pkgconfig/:$PKF_CONFIG_PATH
./autogen.sh --prefix=/mingw32/ --shared=/mingw32/
