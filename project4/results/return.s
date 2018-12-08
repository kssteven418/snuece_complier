	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
f:
	shift_sp 3
f_start:
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	jump f_final
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 123
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	fetch
	push_const 456
	assign
	fetch
	shift_sp -1
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
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
f_end:
	push_const 10
	shift_sp -1
	push_const 10
	shift_sp -1
soo:
	shift_sp 50
soo_start:
	push_reg fp
	push_const 26
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 26
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 200
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 26
	add
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 300
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 26
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 400
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -26
	add
	push_reg fp
	push_const 26
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
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
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
soo2:
	shift_sp 25
soo2_start:
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 11
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
	push_const 22
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 33
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 44
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -26
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
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	fetch
	assign
	shift_sp -2
	jump soo2_final
soo2_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
soo2_end:
soop:
	shift_sp 25
soop_start:
	push_reg fp
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 11
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
	push_const 22
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 33
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 44
	assign
	fetch
	shift_sp -1
	push_const Lglob+1
	push_const 0
	add
	push_reg sp
	fetch
	push_const 11
	assign
	fetch
	shift_sp -1
	push_const Lglob+1
	push_const 1
	add
	push_reg sp
	fetch
	push_const 22
	assign
	fetch
	shift_sp -1
	push_const Lglob+1
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 33
	assign
	fetch
	shift_sp -1
	push_const Lglob+1
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 44
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -3
	add
	push_const Lglob+1
	assign
	jump soop_final
soop_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
soop_end:
main:
	shift_sp 77
main_start:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	push_const 20
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 1
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
	push_const 2
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 2
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 4
	assign
	fetch
	shift_sp -1
str_5. string "Testing for RETURN; statement... Ans : 10, 20, 100, 10, 100\n"
	push_const str_5
	write_string
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_reg fp
	push_const 2
	add
	fetch
	push_reg fp
	push_const 3
	add
	push_reg sp
	push_const -2
	add
	pop_reg fp
	jump f
label_0:
	shift_sp -1
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
str_8. string "\n"
	push_const str_8
	write_string
str_9. string "Testing for RETURN struct; statement... \nAns : 1 2 3 4 1 2 3 4 11 22 33 44 100 200 300 400 11 22 33 44 777\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	fetch
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 4
	add
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 4
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	push_reg fp
	push_const 28
	add
	push_reg sp
	fetch
	shift_sp 24
	push_const label_1
	push_reg fp
	push_const 0
	push_reg sp
	pop_reg fp
	jump soo2
label_1:
	push_reg sp
	push_const -25
	add
	fetch
	push_reg sp
	push_const -24
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
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	fetch
	assign
	shift_sp -2
	shift_sp 25
	shift_sp -1
	push_reg fp
	push_const 52
	add
	push_reg sp
	fetch
	shift_sp 24
	push_const label_2
	push_reg fp
	push_const 0
	push_const 1000
	push_reg fp
	push_const 4
	add
	shift_sp 23
	push_reg sp
	push_const -23
	add
	push_reg sp
	push_const -24
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
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	fetch
	assign
	shift_sp -2
	push_reg sp
	push_const -25
	add
	pop_reg fp
	jump soo
label_2:
	push_reg sp
	push_const -25
	add
	fetch
	push_reg sp
	push_const -24
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
	shift_sp -2
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 22
	add
	fetch
	assign
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	push_reg sp
	push_const -1
	add
	fetch
	push_const 23
	add
	fetch
	assign
	shift_sp -2
	shift_sp 25
	shift_sp -1
	push_reg fp
	push_const 4
	add
	push_const 0
	add
	fetch
	write_int
str_14. string "\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 4
	add
	push_const 1
	add
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
	push_reg fp
	push_const 4
	add
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_16. string "\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 4
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 28
	add
	push_const 0
	add
	fetch
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 28
	add
	push_const 1
	add
	fetch
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
	push_const 28
	add
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_20. string "\n"
	push_const str_20
	write_string
	push_reg fp
	push_const 28
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	fetch
	write_int
str_21. string "\n"
	push_const str_21
	write_string
	push_reg fp
	push_const 52
	add
	push_const 0
	add
	fetch
	write_int
str_22. string "\n"
	push_const str_22
	write_string
	push_reg fp
	push_const 52
	add
	push_const 1
	add
	fetch
	write_int
str_23. string "\n"
	push_const str_23
	write_string
	push_reg fp
	push_const 52
	add
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 52
	add
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	fetch
	write_int
str_25. string "\n"
	push_const str_25
	write_string
	push_reg fp
	push_const 76
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_3
	push_reg fp
	push_const 0
	push_reg sp
	pop_reg fp
	jump soop
label_3:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 76
	add
	fetch
	push_const 0
	add
	fetch
	write_int
str_26. string "\n"
	push_const str_26
	write_string
	push_reg fp
	push_const 76
	add
	fetch
	push_const 1
	add
	fetch
	write_int
str_27. string "\n"
	push_const str_27
	write_string
	push_reg fp
	push_const 76
	add
	fetch
	push_const 2
	add
	push_const 1
	add
	fetch
	write_int
str_28. string "\n"
	push_const str_28
	write_string
	push_reg fp
	push_const 76
	add
	fetch
	push_const 12
	add
	push_const 0
	add
	push_const 2
	add
	fetch
	write_int
str_29. string "\n"
	push_const str_29
	write_string
	push_reg fp
	push_const 76
	add
	fetch
	push_const 0
	add
	push_reg sp
	fetch
	push_const 777
	assign
	fetch
	shift_sp -1
	push_const Lglob+1
	push_const 0
	add
	fetch
	write_int
str_30. string "\n"
	push_const str_30
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 25
