#!/bin/bash

function timetmp(){
    date > /tmp/timetmp
    ls -R / 
    date >> /tmp/timetmp
    cat /tmp/timetmp
}

timetmp 
exit