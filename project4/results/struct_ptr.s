	shift_sp 2
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 10
	shift_sp -1
foo:
	shift_sp 2
foo_start:
	push_reg fp
	push_const 1
	add
	fetch
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
	push_const 11
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	push_const 11
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 11
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 11
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -3
	add
	push_reg fp
	push_const 1
	add
	fetch
	assign
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 2
main_start:
str_3. string "struct pointer function : 10 20 30 20 40 60 40 80 120\n"
	push_const str_3
	write_string
	push_const Lglob+0
	push_const 0
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 11
	add
	push_reg sp
	fetch
	push_const 20
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 30
	assign
	fetch
	shift_sp -1
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_const Lglob+0
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump foo
label_0:
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_1
	push_reg fp
	push_const 0
	push_const Lglob+0
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump foo
label_1:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
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
	push_const 11
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 13
