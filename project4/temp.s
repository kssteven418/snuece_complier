	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
h:
	shift_sp 4
h_start:
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
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_reg fp
	push_const 3
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
h_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
h_end:
g:
	shift_sp 4
g_start:
	push_reg fp
	push_const 3
	add
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
f:
	shift_sp 9
f_start:
	push_reg fp
	push_const 8
	add
	push_reg sp
	fetch
	push_const 123
	assign
	fetch
	shift_sp -1
str_4. string "-s.x\n"
	push_const str_4
	write_string
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
str_6. string "-11\n"
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
str_8. string "-22\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 4
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
str_10. string "-66\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 5
	add
	fetch
	write_int
str_11. string "\n"
	push_const str_11
	write_string
str_12. string "-44\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 6
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
str_14. string "-55\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 7
	add
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
str_16. string "-123\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 8
	add
	fetch
	write_int
str_17. string "\n"
	push_const str_17
	write_string
str_18. string "-11\n"
	push_const str_18
	write_string
	push_const Lglob+0
	fetch
	write_int
str_19. string "\n"
	push_const str_19
	write_string
f_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
f_end:
main:
	shift_sp 3
main_start:
	push_const Lglob+0
	push_reg sp
	fetch
	push_const 11
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 22
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 33
	assign
	fetch
	shift_sp -1
str_20. string "jump!\n"
	push_const str_20
	write_string
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_const Lglob+0
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_reg fp
	push_const 2
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump h
label_0:
	shift_sp -1
	shift_sp 1
	push_const label_1
	push_reg fp
	push_const 0
	push_const Lglob+1
	shift_sp 1
	push_reg sp
	push_const -1
	add
	push_reg sp
	push_const -2
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
	shift_sp -2
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	push_const -3
	add
	pop_reg fp
	jump g
label_1:
	shift_sp -1
	shift_sp 1
	push_const label_2
	push_reg fp
	push_const 0
	push_const Lglob+1
	shift_sp 1
	push_reg sp
	push_const -1
	add
	push_reg sp
	push_const -2
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
	shift_sp -2
	push_const Lglob+0
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	push_const Lglob+0
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	add
	push_reg fp
	push_const 2
	add
	fetch
	add
	push_const 44
	push_const 55
	push_reg sp
	push_const -7
	add
	pop_reg fp
	jump f
label_2:
	shift_sp -1
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 3
