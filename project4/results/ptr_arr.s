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
	push_const 10
	shift_sp -1
	push_const 10
	shift_sp -1
main:
	push_const 10
	shift_sp -1
	push_const 10
	shift_sp -1
	push_const 10
	shift_sp -1
	shift_sp 235
main_start:
str_0. string "testing for pointer +/- int operator. 5 b 50 / 6 c 60 / 4 a 40 / 777 x 888 999\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 5
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 6
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 4
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 98
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 97
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 99
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 50
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 6
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 60
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 4
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 40
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
	add
	fetch
	push_const 1
	push_const 1
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 233
	add
	fetch
	push_const 1
	push_const 1
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	fetch
	push_const 1
	push_const 21
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
	add
	fetch
	push_const 2
	push_const 1
	mul
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 233
	add
	fetch
	push_const 2
	push_const 1
	mul
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	fetch
	push_const 2
	push_const 21
	mul
	sub
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 233
	add
	fetch
	fetch
	write_char
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 232
	add
	fetch
	push_reg sp
	fetch
	push_const 777
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	fetch
	push_reg sp
	fetch
	push_const 120
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 888
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	fetch
	push_const 1
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 999
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 11
	add
	push_const 4
	add
	fetch
	write_char
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 21
	add
	push_const 4
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
str_14. string "testing for pointer ++/-- operation, 5 6 5 5 50 60 50 50\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 233
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 5
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 6
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 4
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 5
	add
	push_reg sp
	fetch
	push_const 98
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_const 97
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 11
	add
	push_const 6
	add
	push_reg sp
	fetch
	push_const 99
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 5
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 50
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 6
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 60
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	push_const 4
	push_const 21
	mul
	add
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 40
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	push_const 5
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 231
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
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
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 231
	add
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_16. string "\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 231
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 232
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 231
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 232
	add
	fetch
	fetch
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 231
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 21
	add
	assign
	fetch
	push_const 21
	sub
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 231
	add
	fetch
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_20. string "\n"
	push_const str_20
	write_string
	push_reg fp
	push_const 231
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 234
	add
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 21
	sub
	assign
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 231
	add
	fetch
	write_int
str_21. string "\n"
	push_const str_21
	write_string
	push_reg fp
	push_const 234
	add
	fetch
	push_const 11
	add
	push_const 0
	add
	push_const 0
	add
	fetch
	write_int
str_22. string "\n"
	push_const str_22
	write_string
	push_reg fp
	push_const -3
	add
	push_const 0
	assign
	jump main_final
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 10
