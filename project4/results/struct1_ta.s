	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 5
	shift_sp -1
main:
	push_const 10
	shift_sp -1
	shift_sp 84
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 7
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_reg fp
	push_const 1
	add
	fetch
	push_const 8
	mul
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 5
	add
	push_reg fp
	push_const 1
	add
	fetch
	push_const 8
	mul
	add
	push_const 1
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 10
