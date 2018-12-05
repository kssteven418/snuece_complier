#!/usr/bin/python

import sys
import subprocess
import os

test_path = "Testcode/"
res_path = "results/"
p = subprocess.Popen("make", stdout=subprocess.PIPE, shell=True)
(output, err) = p.communicate()
 
	
fname = str(sys.argv[1])
smode = False
rmode = False 
if len(sys.argv)>2:
	if sys.argv[2] == "-s":
		smode = True # silent mode, do not run
	elif sys.argv[2] == "-r":
		rmode = True # run mode, run only

if rmode==False:
	p = subprocess.Popen("./subc "+test_path+fname+".c > "+res_path+fname+".s", stdout=subprocess.PIPE, shell=True)
	(output, err) = p.communicate()

if smode==False:
	print "./sim/sim "+test_path+fname+".s"
	p = subprocess.Popen("./sim/sim "+res_path+fname+".s", stdout=subprocess.PIPE, shell=True)
	(output, err) = p.communicate()
	print output
	






