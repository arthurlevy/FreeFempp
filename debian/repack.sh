#!/bin/sh

#clean up the upstream tarball

VERSION=3.13.1
gunzip freefem++-$VERSION.tar.gz
tar --delete --file=freefem++-$VERSION.tar freefem++-3.13/._FreeFem++-CoCoa
gzip freefem++-$VERSION.tar

exit 0