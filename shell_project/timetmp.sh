#!/bin/bash

function timetmp(){
    date >> /tmp/timetmp
    cat /tmp/timetmp
}

timetmp 
exit

timetmp 
exit