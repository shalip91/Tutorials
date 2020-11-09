#!/bin/bash

echo -e "Enter the name of the file"
read name

if [ -f $name ]
then
    if [ -w $name ]
    then
        echo "Type some text data. To quit press ctrl+d."
        cat >> $name 
    else
        echo "The file do not have write permissions"
    fi
else
    echo "$name not exists"
fi