#!/bin/bash

function cpfile(){
    args=("$@")
    for (( c=0; c<$#; c++ ))
    do
        file=${args[c]} 
        echo "Welcome $c times"
        echo "${args[c]}"
        if [ -e $file ] #-f for file 
                        #-d for folder
                        #-s if the file is empty
                        #-r if the file is read permision
                        #-w if the file is write permision
                        #-x if the file is execute permision
        then
            cp $file /tmp
        fi
    done
}

cpfile $@
exit

