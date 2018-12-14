	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 10
	shift_sp -1
sm:
	shift_sp 15
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
	push_const 11
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
	push_const 3
	add
	push_const 1
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 123
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -14
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
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	fetch
	assign
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
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
	shift_sp 17
foo_start:
	push_reg fp
	push_const 3
	add
	push_const 0
	add
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 3
	add
	push_const 1
	add
	push_const 5
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
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 15
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 3
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 11111
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_const 11
	add
	push_reg sp
	fetch
	push_const 22222
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -14
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
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	fetch
	assign
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
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
	shift_sp 13
main_start:
str_4. string "Passing function return value directly into argument... ans : 7 123 8888 77 11111 22222\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 12
	push_const label_0
	push_reg fp
	push_const 0
	push_const 8888
	push_const 9999
	shift_sp 12
	push_const label_1
	push_reg fp
	push_const 0
	push_const 7
	push_const 8
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump sm
label_1:
	push_const 77
	push_const 88
	push_reg sp
	push_const -16
	add
	pop_reg fp
	jump foo
label_0:
	push_reg sp
	push_const -13
	add
	fetch
	push_reg sp
	push_const -12
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
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 3
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 4
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 5
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 6
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 7
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 8
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 9
	add
	fetch
	assign
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 11
	add
	fetch
	assign
	shift_sp -2
	shift_sp 13
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 1
	add
	push_const 11
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	shift_sp 12
	push_const label_2
	push_reg fp
	push_const 0
	push_const 8888
	push_const 9999
	shift_sp 12
	push_const label_3
	push_reg fp
	push_const 0
	push_const 7
	push_const 8
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump sm
label_3:
	push_const 77
	push_const 88
	push_reg sp
	push_const -16
	add
	pop_reg fp
	jump foo
label_2:
	push_reg sp
	push_const -11
	add
	push_const 1
	add
	fetch
	shift_sp -13
	push_reg sp
	push_const 13
	add
	fetch
	pu