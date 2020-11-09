#!/bin/bash

# # takes input as an array
# echo "Enter 3 names at ones :"
# read -a names
# echo "Names: "${names[0]} ${names[1]}


# # # #takes input in the same row
# read -p "user name: " name #in the same line
# read -sp "user password: " pass #in the same line
# echo "username: "$name
# echo "username: "$pass


# take unlimitless amount of input as an array
args=("$@")
for (( c=0; c<$#; c++ ))
do
    echo "${args[c]}"
done
echo "the number of arguments" $#

