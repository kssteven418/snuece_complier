#!/usr/bin/python

import sys
import subprocess
import os


def get_error_lines(fp):
	p = subprocess.Popen("cat "+f, stdout=subprocess.PIPE, shell=True)
	(output, err) = p.communicate()
	
	output = output.split("\n")
	error_lines = []
	i = 1
	for line in output:
		if "error" in line:
			error_lines.append(i)
		i = i+1
		
	return error_lines


def check_answer(real, test):
	false_pos = [] # in real but not in test
	false_neg = [] # in test but not in real

	for i in real:
		if i not in test:
			false_pos.append(i)

	for i in test:
		if i not in real:
			false_neg.append(i)

	return false_pos, false_neg

def print_error_msg(fp, fn):
	if len(fp)==0 and len(fn)==0:
		print "No Errors"
		return
	
	for i in fp:
		print "line "+str(i)+" should BE an error"
	
	for i in fn:
		print "line "+str(i)+" should NOT be an error"
		
	return

files = []
root = "tests"

for r, d, f in os.walk(root):  
	for filename in f:
		if filename.endswith('.c'):
			files.append(root+"/"+filename)

files.sort()

p = subprocess.Popen("make", stdout=subprocess.PIPE, shell=True)
(output, err) = p.communicate()
 
for f in files :
	
	print "Testing for "+f

	ans = get_error_lines(f)

	p = subprocess.Popen("./subc "+f, stdout=subprocess.PIPE, shell=True)
	(output, err) = p.communicate()
	output = output.split("\n")
	error_lines = []
	for line in output:
		temp = line.split(":")
		if len(temp)>1:
			error_lines.append(int(temp[1]))

	fp, fn = check_answer(ans, error_lines)

	print_error_msg(fp, fn)

	print "---------------------"
	print ""




