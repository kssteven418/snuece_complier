	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
temp:
	shift_sp 1
temp_start:
	push_const Lglob+0
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const -3
	add
	push_const Lglob+0
	assign
	jump temp_final
temp_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
temp_end:
temp2:
	shift_sp 1
temp2_start:
	push_reg fp
	push_const -3
	add
	push_const 10
	assign
	jump temp2_final
temp2_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
temp2_end:
main:
	shift_sp 2
main_start:
	push_reg fp
	push_const 1
	add
	push_reg sp
	fetch
	shift_sp 1
	push_const label_0
	push_reg fp
	push_const 0
	push_reg sp
	pop_reg fp
	jump temp
label_0:
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 1
	add
	fetch
	fetch
	write_int
str_0. string "\n"
	push_const str_0
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 1
