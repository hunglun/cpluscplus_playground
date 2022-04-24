#!/bin/sh
mkdir $1
if [ -d "$1" ]; then 
    if cp -vr hello/* $1; then
	echo "base $1 folder successfully created"
    fi
fi
