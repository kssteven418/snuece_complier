	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
foo:
	shift_sp 7
foo_start:
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -5
	add
	push_reg fp
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	fetch
	assign
	shift_sp -2
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
foo_end:
soo:
	shift_sp 7
soo_start:
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	assign
	fetch
	shift_sp -1
	shift_sp 3
	push_const label_0
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump foo
label_0:
	shift_sp -3
	shift_sp 3
	push_const label_1
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump foo
label_1:
	shift_sp -3
	shift_sp 3
	push_const label_2
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump foo
label_2:
	shift_sp -3
	shift_sp 3
	push_const label_3
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump foo
label_3:
	shift_sp -3
	shift_sp 3
	push_const label_4
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump foo
label_4:
	shift_sp -3
	push_reg fp
	push_const -5
	add
	push_reg fp
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	fetch
	assign
	shift_sp -2
	jump soo_final
soo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
soo_end:
main:
	shift_sp 4
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 3
	push_const label_5
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump soo
label_5:
	push_reg sp
	push_const -4
	add
	fetch
	push_reg sp
	push_const -3
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 0
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 1
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 2
	add
	fetch
	assign
	shift_sp -2
	shift_sp 4
	shift_sp -1
	push_reg fp
	push_const 1
	add
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
	push_const 1
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
