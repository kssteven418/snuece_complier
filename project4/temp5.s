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
	shift_sp 19
sm_start:
	push_reg fp
	push_const 5
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
	push_const 5
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
	push_const 5
	add
	push_const 12
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
	push_const 5
	add
	push_const 13
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 4
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -16
	add
	push_reg fp
	push_const 5
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
	push_const 12
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 12
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 13
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 13
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
main:
	shift_sp 15
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 14
	push_const label_0
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_const 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump sm
label_0:
	push_reg sp
	push_const -15
	add
	fetch
	push_reg sp
	push_const -14
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
	push_const 12
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 12
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 13
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 13
	add
	fetch
	assign
	shift_sp -2
	shift_sp 15
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
	shift_sp 14
	push_const label_1
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_const 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump sm
label_1:
	push_reg sp
	push_const -13
	add
	push_const 0
	add
	fetch
	shift_sp -15
	push_reg sp
	push_const 15
	add
	fetch
	push_const 1
	add
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	shift_sp 14
	push_const label_2
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_const 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump sm
label_2:
	push_reg sp
	push_const -13
	add
	push_const 1
	add
	fetch
	shift_sp -15
	push_reg sp
	push_const 15
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	shift_sp 14
	push_const label_3
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_const 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump sm
label_3:
	push_reg sp
	push_const -13
	add
	push_const 12
	add
	fetch
	shift_sp -15
	push_reg sp
	push_const 15
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	shift_sp 14
	push_const label_4
	push_reg fp
	push_const 0
	push_const 1
	push_const 2
	push_const 3
	push_const 4
	push_reg sp
	push_const -4
	add
	pop_reg fp
	jump sm
label_4:
	push_reg sp
	push_const -13
	add
	push_const 13
	add
	fetch
	shift_sp -15
	push_reg sp
	push_const 15
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
