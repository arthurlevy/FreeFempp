#!/bin/sh
# Testing procedure for MPI version of FreeFem++
# $Id: regtests.sh,v 1.3 2004/07/01 12:26:01 lehyaric Exp $

NPROCS=2 REGEDP=essai.edp ../regtests.sh
if test $? != 0
    then
    exit 1
fi
NPROCS=2 REGEDP=schwarz.edp ../regtests.sh
if test $? != 0
    then
    exit 1
fi
NPROCS=2 REGEDP=schwarz-b.edp ../regtests.sh
if test $? != 0
    then
    exit 1
fi
NPROCS=2 REGEDP=schwarz-c.edp ../regtests.sh
if test $? != 0
    then
    exit 1
fi

