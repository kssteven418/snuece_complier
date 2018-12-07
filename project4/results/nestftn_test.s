	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
f:
	shift_sp 1
f_start:
	push_reg fp
	push_const 0
	add
	fetch
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 0
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	add
	assign
	fetch
	push_const 1
	sub
	shift_sp -1
	push_reg fp
	push_const 0
	add
	fetch
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
f_end:
g:
	shift_sp 3
g_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 0
	add
	fetch
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
g_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
g_end:
main:
	shift_sp 3
main_start:
	push_reg fp
	push_const 0
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 200
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 0
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	push_reg sp
	fetch
	push_const 300
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_reg sp
	pop_reg fp
	push_reg fp
	push_const 2
	add
	fetch
	shift_sp -1
	shift_sp 1
	push_reg sp
	push_const 1
	sub
	push_reg sp
	fetch
	push_const 0
	add
	push_reg fp
	push_const -1
	add
	fetch
	push_const 2
	add
	fetch
	assign
	shift_sp -1
	jump g
	label_0:
	shift_sp -1
	push_reg fp
	push_const 0
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
