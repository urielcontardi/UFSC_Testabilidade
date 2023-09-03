#! /bin/sh

mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
make progst
make st_util_test
