#!/bin/bash

read -p "enter a/b/c: " word
if  [[ $word < "b" ]]
then
    echo "smaller than b"
elif [[ $word > "b" ]]
then
    echo "bigger than b"
else
    echo "they are equal"
fi


# and operator
age = 25
if [[ "$age" -gt 18 && "$age" -lt 30 ]]
#if [ "$age" -gt 18 -a "$age" -lt 30 ]
# if [[ "$age" -gt 18 || "$age" -lt 30 ]]
#if [ "$age" -gt 18 -o "$age" -lt 30 ]
then
    echo "valid age"
else
    echo "age not valid"
fi

# ##number comparison

# -eq - is equal to - if [ "$a" -eq "$b" ]
# -ne - is not equal to - if [ "$a" -ne "$b" ] 
# -gt - is greater than - if [ "$a" -gt "$b" ] 
# -ge - is greater than or equal to - if [ "$a" -ge "$b" ] 
# -lt - is less than - if [ "$a" -lt "$b"  
# -le - is less than or equal to - if [ "$a" -le "$b" ] 
# < - is less than - (("$a" < "$b")) 
# <= - is less than or equal to - (("$a" <= "$b")) 
# > - is greater than - (("$a" > "$b"))
# >= - is greater than or equal to - (("$a" >= "$b"))



# ##strings comparison

# = - is equal to - if [ "$a" = "$b" ]
# == - is equal to - if [ "$a" == "$b" ]
# != - is not equal to - if [ "$a" != "$b" ]
# < - is less than, in ASCII alphabetical order - if [[ "$a" < "$b" ]]
# > - is greater than, in ASCII alphabetical order - if [[ "$a" > "$b" ]]
# -z - string is null, that is, has zero length