	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
main:
	shift_sp 9
main_start:
	push_reg fp
	push_const 9
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 20
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 9
	add
	fetch
	push_const 2
	add
	push_reg sp
	fetch
 push_const 65
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 9
	add
	fetch
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 9
	add
	fetch
	push_const 0
	add
	assign
	fetch
	shift_sp -1
str_0. string "simple assignments... ans : 10 20 A 10\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	fetch
	write_char
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 1
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
str_5. string "\n"
	push_const str_5
	write_string
str_6. string "simple struct assignment... ans : 10 20 A 10 X3\n"
	push_const str_6
	write_string
	push_const Lglob+0
	push_reg sp
	fetch
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
	shift_sp -2
	shift_sp -1
	push_const Lglob+0
	push_const 0
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_const Lglob+0
	push_const 1
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_const Lglob+0
	push_const 2
	add
	fetch
	write_char
str_9. string "\n"
	push_const str_9
	write_string
	push_const Lglob+0
	push_const 3
	add
	fetch
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 5
	add
	push_reg sp
	fetch
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
	shift_sp -2
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_const 0
	add
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 5
	add
	push_const 1
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	push_reg fp
	push_const 5
	add
	push_const 2
	add
	fetch
	write_char
str_14. string "\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 5
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
str_16. string "\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 5
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 9
	add
	fetch
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
	shift_sp -2
	shift_sp -1
	push_reg fp
	push_const 5
	add
	push_const 0
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 5
	add
	push_const 1
	add
	fetch
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 5
	add
	push_const 2
	add
	fetch
	write_char
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
	push_const 5
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_20. string "\n"
	push_const str_20
	write_string
str_21. string "\n"
	push_const str_21
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 4
