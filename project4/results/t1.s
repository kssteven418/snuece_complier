	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 1
main_start:
	push_const Lglob+0
	push_reg sp
	fetch
	push_const Lglob+1
	fetch
	fetch
	assign
	fetch
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 2
