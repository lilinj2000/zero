#! /bin/sh

home_libs=~/libs

home_zero=${home_libs}/zero

./configure --prefix=${home_zero}

if test -d ${home_zero}; then
    rm -rf ${home_zero}
fi

make install

make distclean
