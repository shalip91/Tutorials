#!/bin/bash

function removeFileRecursive(){
    args=("$@")
    for (( c=0; c<$#; c++ ))
    do
        file=${args[c]} 
        find . -type f -name $file -exec rm {} \;
    done
}

removeFileRecursive $@
exit

