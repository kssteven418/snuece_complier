	shift_sp 2
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 8
	shift_sp -1
	push_const 10
	shift_sp -1
	push_const 100
	shift_sp -1
	push_const 10
	shift_sp -1
	push_const 10
	shift_sp -1
main:
	push_const 10
	shift_sp -1
	shift_sp 2002
main_start:
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 2100
