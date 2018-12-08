	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
sm:
	shift_sp 5
sm_start:
	push_reg fp
	push_const 3
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
	push_const 3
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
	push_const -4
	add
	push_reg fp
	push_const 3
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
	shift_sp -2
	jump sm_final
sm_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
sm_end:
foo:
	shift_sp 5
foo_start:
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
	push_const 0
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
	push_const -4
	add
	push_reg fp
	push_const 1
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
	shift_sp -2
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	shift_sp 3
main_start:
str_1. string "Passing function return value directly into argument... ans : 1 2 3 11 22 33\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 2
	push_const label_0
	push_reg fp
	push_const 0
	shift_sp 2
	push_const label_0
	push_reg fp
	push_const 0
	push_const 7
	push_const 8
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump sm
label_0:
	push_const 1000
	push_reg fp
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const 0
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const 0
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -6
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -6
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -7
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -7
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -8
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -8
	add
	fetch
	write_int
	push_const 1000
	write_int
	shift_sp -1
	push_const 77
	push_const 88
	push_reg sp
	push_const 0
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const 0
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump foo
label_1:
	push_const 1000
	push_reg fp
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const 0
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const 0
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -1
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -2
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -4
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -5
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -6
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -6
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -7
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -7
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -8
	add
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -8
	add
	fetch
	write_int
	push_const 1000
	write_int
	push_reg sp
	push_const -3
	add
	fetch
	push_reg sp
	push_const -2
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
	shift_sp -2
	shift_sp 3
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
