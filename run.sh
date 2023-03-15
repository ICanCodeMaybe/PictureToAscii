#! /bin/bash

PATH_TO_PIC=$1
SCALE_DOWN=$2

if [ -z $1 ]
	then
		echo "You have to put /path/to/pic.jpg as first argument"

fi

if [ $2 -eq 0 ] 
	then
		SCALE_DOWN=7
fi

cd out/build

./pic_ascii $PATH_TO_PIC $SCALE_DOWN

