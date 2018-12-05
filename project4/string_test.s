	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
foo:
	shift_sp 1
foo_start:
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 3
main_start:
	push_const Lglob+0
	push_reg sp
	fetch
str_0. string "gello"
	push_const str_0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	push_reg sp
	fetch
str_1. string "lello"
	push_const str_1
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	fetch
	write_string
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 0
	add
	fetch
	write_string
str_3. string "\n"
	push_const str_3
	write_string
str_4. string "hello"
	push_const str_4
	write_string
str_5. string "\n"
	push_const str_5
	write_string
	push_const 1
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 2
	add
	read_char
	assign
	push_reg fp
	push_const 2
	add
	fetch
	write_char
str_7. string "\n"
	push_const str_7
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 1
