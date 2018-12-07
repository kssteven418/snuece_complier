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
	shift_sp 26
f_start:
str_0. string "Parameter Passing...\n"
	push_const str_0
	write_string
str_1. string "ans : 11 22 33 44 55 777 888 123 11\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 25
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
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 23
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 24
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
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
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 13
	add
	push_const 9
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 25
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_const Lglob+0
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
str_11. string "Ending..!\n"
	push_const str_11
	write_string
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
f_end:
g:
g_start:
g_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
g_end:
main:
	shift_sp 12
main_start:
	push_const Lglob+1
	push_const 1
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 777
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_const 9
	add
	push_reg sp
	fetch
	push_const 888
	assign
	fetch
	shift_sp -1
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
	push_reg fp
	push_const 0
	add
	shift_sp 10
	push_const label_0
	push_reg fp
	push_const 0
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
	push_const Lglob+1
	push_reg fp
	push_const 2
	add
	push_const 44
	push_const 55
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp -1
	shift_sp 25
	push_reg sp
	push_const 25
	sub
	push_reg sp
	fetch
	push_const 0
	add
	push_const Lglob+0
	fetch
	assign
	push_reg sp
	fetch
	push_const 1
	add
	push_reg fp
	push_const -1
	add
	fetch
	push_const 0
	add
	fetch
	assign
	push_reg sp
	fetch
	push_const 2
	add
	push_reg fp
	push_const -1
	add
	fetch
	push_const 1
	add
	fetch
	assign
	push_reg sp
	fetch
	push_const 3
	add
	push_const Lglob+1
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
	shift_sp -2
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
	fetch
	push_const 13
	add
	push_reg fp
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
	shift_sp -2
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
	fetch
	push_const 23
	add
	push_const 44
	assign
	push_reg sp
	fetch
	push_const 24
	add
	push_const 55
	assign
	shift_sp -1
	jump f
	label_0:
	shift_sp -1
str_12. string "Return safely..!\n"
	push_const str_12
	write_string
str_13. string "\n"
	push_const str_13
	write_string
str_14. string "Safety check ... ans : 33 22 777\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
	push_reg fp
	push_const 0
	add
	fetch
	write_int
str_16. string "\n"
	push_const str_16
	write_string
	push_const Lglob+1
	push_const 1
	add
	push_const 5
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 11
