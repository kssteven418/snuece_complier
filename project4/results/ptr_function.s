	shift_sp 2
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 10
	shift_sp -1
foo:
	shift_sp 2
foo_start:
	push_reg fp
	push_const 1
	add
	fetch
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
	fetch
	push_const 11
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
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const -3
	add
	push_const Lglob+12
	fetch
	assign
	jump foo_final
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
foo_end:
goo:
	shift_sp 2
goo_start:
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	push_const 10
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -3
	add
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	assign
	jump goo_final
goo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
goo_end:
hoo:
	shift_sp 2
hoo_start:
	push_reg fp
	push_const 1
	add
	fetch
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	push_const 10
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -3
	add
	push_reg fp
	push_const 1
	add
	fetch
	assign
	jump hoo_final
hoo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
hoo_end:
main:
	shift_sp 4
main_start:
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_const Lglob+13
	push_reg sp
	fetch
	push_reg fp
	push_const 1
	add
	assign
	fetch
	shift_sp -1
str_3. string "int pointer function : 10 10 0 20 20 20 30 30 50 50\n"
	push_const str_3
	write_string
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_const Lglob+13
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump goo
label_0:
	shift_sp -1
	push_const Lglob+13
	fetch
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_reg fp
	push_const 2
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_1
	push_reg fp
	push_const 0
	push_const Lglob+13
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump goo
label_1:
	assign
	fetch
	shift_sp -1
	push_const Lglob+13
	fetch
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 2
	add
	fetch
	write_int
str_9. string "\n"
	push_const str_9
	write_string
	shift_sp 1
	push_const label_2
	push_reg fp
	push_const 0
	push_const Lglob+13
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump hoo
label_2:
	shift_sp -1
	push_const Lglob+13
	fetch
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 1
	add
	fetch
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 3
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_3
	push_reg fp
	push_const 0
	push_const Lglob+13
	fetch
	push_reg sp
	push_const -1
	add
	pop_reg fp
	jump hoo
label_3:
	assign
	fetch
	shift_sp -1
	push_const Lglob+13
	fetch
	push_reg sp
	fetch
	push_reg fp
	push_const 3
	add
	fetch
	fetch
	push_const 10
	add
	assign
	fetch
	shift_sp -1
	push_const Lglob+13
	fetch
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 3
	add
	fetch
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
Lglob.	data 14
