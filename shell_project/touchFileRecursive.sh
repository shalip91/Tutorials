#!/bin/bash

function touchFileRecursive(){
    args=("$@")
    for (( c=0; c<$#; c++ ))
    do
        if [ -e ${args[c]} ]
        then
            echo "file allready exist" 
        else
            find ./* -type d -exec touch {}/${args[c]} \;
        fi
    done
}

touchFileRecursive $@
exit

