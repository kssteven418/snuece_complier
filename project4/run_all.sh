#!/bin/sh
for filename in Testcode/*; do 
	
	t=$(basename "${filename}"); 
	echo "======================="
	echo "Testing ${filename}"
	./build.py ${t}
	done

