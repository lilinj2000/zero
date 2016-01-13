#! /bin/sh

home_libs=~/libs

if test -d /llj/libs ; then
   home_libs=/llj/libs
fi

home_zero=${home_libs}/zero

./configure --prefix=${home_zero}

if test -d ${home_zero}; then
    rm -rf ${home_zero}
fi

make install

make distclean
