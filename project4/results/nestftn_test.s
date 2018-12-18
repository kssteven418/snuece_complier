	shift_sp 2
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
fib:
	shift_sp 4
fib_start:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_const 1
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	push_const 0
	equal
	branch_false label_4
	push_reg fp
	push_const -3
	add
	push_const 1
	assign
	jump fib_final
	jump label_5
label_4:
	push_reg fp
	push_const 1
	add
	fetch
	push_const 1
	equal
	branch_false label_6
	push_reg fp
	push_const -3
	add
	push_const 1
	assign
	jump fib_final
	jump label_7
label_6:
	push_reg fp
	push_const -3
	add
	shift_sp 1
	push_const label_8
	push_reg fp
	push_const 0
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump fib
label_8:
	shift_sp 1
	push_const label_9
	push_reg fp
	push_const 0
	push_reg fp
	push_const 3
	add
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump fib
label_9:
	add
	assign
	jump fib_final
label_7:
label_5:
fib_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
fib_end:
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
	shift_sp 1
	push_const label_10
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
label_10:
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
	shift_sp 1
	push_const label_11
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
label_11:
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
str_14. string "\n"
	push_const str_14
	write_string
str_15. string "FIBONACCI FUNCTION..! ans = fib(6)\n"
	push_const str_15
	write_string
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_12
	push_reg fp
	push_const 0
	push_const 7
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump fib
label_12:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_16. string "\n"
	push_const str_16
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 0
