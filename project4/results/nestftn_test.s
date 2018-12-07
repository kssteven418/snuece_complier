	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
f:
	shift_sp 2
f_start:
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
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
	push_const 1
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
	shift_sp 2
g_start:
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump f
	label_0:
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
g_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
g_end:
recursive:
	shift_sp 2
recursive_start:
	push_reg fp
	push_const 1
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
	push_const 1
	add
	fetch
	fetch
	push_const 10
	less
	branch_false label_1
str_4. string "Recursion going with "
	push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_2
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump recursive
	label_2:
	shift_sp -1
	jump label_3
label_1:
str_6. string "Recursion ended with "
	push_const str_6
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
label_3:
recursive_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
recursive_end:
main:
	shift_sp 2
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
str_8. string "NESTED FUNCTION..! : 100 100 100 101 101 101\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_4
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump g
	label_4:
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
str_11. string "\n"
	push_const str_11
	write_string
str_12. string "RECURSIVE FUNCTION..!\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 101
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 0
	add
	shift_sp 1
	push_const label_5
	push_reg fp
	push_const 0
	push_reg fp
	push_const 1
	add
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump recursive
	label_5:
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
