	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 8
	shift_sp -1
f:
	shift_sp 6
f_start:
	push_reg fp
	push_const 5
	add
	push_reg sp
	fetch
	push_const 123
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 4
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
f_end:
g:
g_start:
g_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
g_end:
main:
	shift_sp 2
main_start:
	push_const Lglob+0
	push_reg sp
	fetch
	push_const 11
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	push_reg sp
	fetch
	push_const 22
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 33
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 0
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 0
	add
	shift_sp 10
	push_const label_0
	push_reg fp
	push_reg sp
	pop_reg fp
	push_const Lglob+0
	fetch
	push_reg fp
	push_const 0
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 44
	push_const 55
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp 5
	push_reg sp
	push_const 5
	sub
	push_reg sp
	fetch
	push_const 0
	add
	push_const Lglob+0
	fetch
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	fetch
	write_int
	push_const 0
	write_int
	assign
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	fetch
	write_int
	push_const 0
	write_int
	push_reg sp
	fetch
	push_const 1
	add
	push_reg fp
	fetch
	push_const 0
	add
	fetch
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	fetch
	write_int
	push_const 0
	write_int
	assign
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	fetch
	write_int
	push_const 0
	write_int
	push_reg sp
	fetch
	push_const 2
	add
	push_reg fp
	fetch
	push_const 1
	add
	fetch
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	fetch
	write_int
	push_const 0
	write_int
	assign
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	fetch
	write_int
	push_const 0
	write_int
	push_reg sp
	fetch
	push_const 3
	add
	push_const 44
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	fetch
	write_int
	push_const 0
	write_int
	assign
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	fetch
	write_int
	push_const 0
	write_int
	push_reg sp
	fetch
	push_const 4
	add
	push_const 55
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	push_const -1
	add
	fetch
	fetch
	write_int
	push_const 0
	write_int
	assign
	push_reg fp
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	write_int
	push_const 0
	write_int
	push_reg fp
	fetch
	fetch
	write_int
	push_const 0
	write_int
	shift_sp -1
	jump f
	label_0:
	shift_sp -1
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_1
	push_reg fp
	push_reg sp
	pop_reg fp
	jump g
	label_1:
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 11
