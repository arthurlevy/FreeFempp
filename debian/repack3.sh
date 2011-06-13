#!/bin/sh

#clean up the upstream tarball

PACKAGE=freefem++
VERSION=3.13

mkdir tmp
mv $PACKAGE-$VERSION.tar.gz tmp
cd tmp
tar zxf $PACKAGE-$VERSION.tar.gz
rm $(find $PACKAGE-$VERSION -iname '._*')
tar -czf $PACKAGE-$VERSION.tar.gz $PACKAGE-$VERSION
mv $PACKAGE-$VERSION.tar.gz ..
cd ..
rm -rf tmp 

exit 0