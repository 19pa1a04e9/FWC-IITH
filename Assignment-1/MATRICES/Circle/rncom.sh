#!/bin/bash


#Download python and latex templates

#svn co https://github.com/gadepall/training/trunk/math  /sdcard/Download/math

#Test Latex Installation
#Uncomment only the following lines and comment the above line

cd /sdcard/IITH/Assignment-1/MATRICES/Circle
texfot pdflatex circle.tex
termux-open circle.pdf

sleep 5

#Test Python Installation
#Uncomment only the following line
python3 /sdcard/IITH/Assignment-1/MATRICES/Circle/circle.py

