#!/bin/sh

#clean up the upstream tarball

PACKAGE=freefem++
VERSION=3.19
VERSION1=3.19

cd ../..
mkdir tmp
mv $PACKAGE-$VERSION.tar.gz tmp
cd tmp
tar zxf $PACKAGE-$VERSION.tar.gz
rm $(find $PACKAGE-$VERSION -iname '._*')
tar -czf $PACKAGE-$VERSION1.tar.gz $PACKAGE-$VERSION
mv $PACKAGE-$VERSION1.tar.gz ..
cd ..
rm -rf tmp 

exit 0