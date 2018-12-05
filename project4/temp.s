	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 2
main_start:
str_0. string "only-if statement... ans : 1 1\n"
	push_const str_0
	write_string
	push_const 1
	branch_false label_0
	push_const 1
	branch_false label_1
	push_const 1
	write_int
str_1. string "\n"
	push_const str_1
	write_string
label_1:
	push_const 0
	branch_false label_2
	push_const 2
	write_int
str_2. string "\n"
	push_const str_2
	write_string
label_2:
label_0:
	push_const 0
	branch_false label_3
	push_const 1
	branch_false label_4
	push_const 3
	write_int
str_3. string "\n"
	push_const str_3
	write_string
label_4:
	push_const 0
	branch_false label_5
	push_const 4
	write_int
str_4. string "\n"
	push_const str_4
	write_string
label_5:
label_3:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_6
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_7
	push_const 1
	write_int
str_5. string "\n"
	push_const str_5
	write_string
label_7:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_8
	push_const 2
	write_int
str_6. string "\n"
	push_const str_6
	write_string
label_8:
label_6:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_9
	push_reg fp
	push_const 2
	add
	fetch
	branch_false label_10
	push_const 3
	write_int
str_7. string "\n"
	push_const str_7
	write_string
label_10:
	push_reg fp
	push_const 1
	add
	fetch
	branch_false label_11
	push_const 4
	write_int
str_8. string "\n"
	push_const str_8
	write_string
label_11:
label_9:
str_9. string "if-else statement...\n"
	push_const str_9
	write_string
str_10. string "while statement... ans : 10 45\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
label_12:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 10
	greater_than
	branch_false label_13
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
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
	jump label_12
label_13
	push_reg fp
	push_const 1
	add
	fetch
	write_int
	push_reg fp
	push_const 2
	add
	fetch
	write_int
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
