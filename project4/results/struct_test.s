	shift_sp 1
	push_const EXIT
	push_reg fp
	push_reg sp 
	pop_reg fp
	jump main
EXIT:
	exit
	push_const 5
	shift_sp -1
	push_const 10
	shift_sp -1
	push_const 2
	shift_sp -1
main:
	shift_sp 32
main_start:
str_0. string "struct test 1...\n"
	push_const str_0
	write_string
str_1. string "ans : 10 0 1 2 3 4\n"
	push_const str_1
	write_string
	push_const Lglob+0
	push_const 0
	add
	push_reg sp
	fetch
	push_const 10
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 1
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 2
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
	push_const 1
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
	push_const Lglob+0
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
	push_const Lglob+0
	push_const 0
	add
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_const Lglob+0
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_3. string "\n"
	push_const str_3
	write_string
	push_const Lglob+0
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_const Lglob+0
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_5. string "\n"
	push_const str_5
	write_string
	push_const Lglob+0
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_6. string "\n"
	push_const str_6
	write_string
	push_const Lglob+0
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
str_8. string "struct test 2...\n"
	push_const str_8
	write_string
str_9. string "ans : 10 0 1 2 3 4\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
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
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_const 0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_const 1
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_const 2
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_const 3
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
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
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 0
	add
	fetch
	write_int
str_10. string "\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_13. string "\n"
	push_const str_13
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_14. string "\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_15. string "\n"
	push_const str_15
	write_string
str_16. string "struct pointer and -> operator...\n"
	push_const str_16
	write_string
str_17. string "ans : 10 0 1 2 3 4 \n~ 10 0 1 2 3 4\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 31
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 7
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 0
	add
	fetch
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_20. string "\n"
	push_const str_20
	write_string
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_21. string "\n"
	push_const str_21
	write_string
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_22. string "\n"
	push_const str_22
	write_string
	push_reg fp
	push_const 31
	add
	fetch
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_23. string "\n"
	push_const str_23
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 0
	add
	fetch
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_25. string "\n"
	push_const str_25
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_26. string "\n"
	push_const str_26
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_27. string "\n"
	push_const str_27
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_28. string "\n"
	push_const str_28
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_29. string "\n"
	push_const str_29
	write_string
str_30. string "struct test 2...\n"
	push_const str_30
	write_string
str_31. string "ans : 10 0 1 2 3 4\n"
	push_const str_31
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 0
	add
	fetch
	write_int
str_32. string "\n"
	push_const str_32
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 0
	add
	fetch
	write_int
str_33. string "\n"
	push_const str_33
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 1
	add
	fetch
	write_int
str_34. string "\n"
	push_const str_34
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 2
	add
	fetch
	write_int
str_35. string "\n"
	push_const str_35
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 3
	add
	fetch
	write_int
str_36. string "\n"
	push_const str_36
	write_string
	push_reg fp
	push_const 7
	add
	push_const 11
	add
	push_const 1
	push_const 6
	mul
	add
	push_const 1
	add
	push_const 4
	add
	fetch
	write_int
str_37. string "\n"
	push_const str_37
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 30
