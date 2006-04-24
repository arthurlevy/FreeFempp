#!/bin/sh
# Runs all known EDP examples through highlighting to make sure they all pass
# Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 22/2/05
# $Id: testhighlight.sh,v 1.9 2006-02-03 15:18:46 hecht Exp $

err=0;
for edp in ../../examples++-tutorial/*.edp ../../examples++*/*.edp 
do

  # Some tests do provoke highlighting errors that we do not want to
  # correct for the moment.
 prob=`egrep "load|macro|include" $edp|wc -l`
  if  [ "$prob" -eq 0 ] ; then
  case xx$edp in
      ../../examples++-tutorial/fluidStruct.edp);;
      ../../examples++-tutorial/fluidStructAdapt.edp);;
      ../../examples++-tutorial/nolinear-elas.edp);;
      ../../examples++-tutorial/VI-adap.edp);;
      ../../examples++-tutorial/VI.edp);;
      ../../examples++*/regtests.edp);;
      ../../examples++*/all.edp);;
      ../../examples++-tutorial/shur-comp.edp);;
      ../../examples++-bug/*);;
      ../../examples++-load/*);;
      ../../examples++/bilap.edp);;
      ../../examples++/makeref.edp);;
      ../../examples++/Richard.edp);;
      ../../examples++-chapt3/lame.edp);;
      ../../examples++-eigen/LapComplexEigenValue.edp);;

      *)

	  if ./testhighlight $edp > /dev/null 2>&1
	      then
	       aa=0
	  else
	      echo  testing $edp  " KO"
	      err=1
	  fi
	  ;;
  esac
  fi
done
# exit $err
