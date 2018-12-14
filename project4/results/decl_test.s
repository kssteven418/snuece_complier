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
foo:
	shift_sp 2
foo_start:
foo_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg fp
	pop_reg pc
foo_end:
main:
	push_const 5
	shift_sp -1
	push_const 5
	shift_sp -1
	push_const 5
	shift_sp -1
	shift_sp 22
main_start:
	push_reg fp
	push_const 21
	add
	push_reg sp
	fetch
str_0. string "hello\n"
	push_const str_0
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 21
	add
	fetch
	write_string
	push_reg fp
	push_const 17
	add
	push_reg sp
	fetch
	push_const Lglob+21
	push_reg sp
	fetch
	push_const 77
	assign
	fetch
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	fetch
	write_int
str_1. string "\n"
	push_const str_1
	write_string
	push_const Lglob+21
	fetch
	write_int
str_2. string "\n"
	push_const str_2
	write_string
	push_reg fp
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 0
	add
	push_reg sp
	fetch
 push_const 97
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 1
	add
	push_reg sp
	fetch
 push_const 98
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 2
	add
	push_reg sp
	fetch
 push_const 99
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 3
	add
	push_reg sp
	fetch
 push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 7
	add
	push_const 4
	add
	push_reg sp
	fetch
 push_const 101
	assign
	fetch
	shift_sp -1
str_3. string "Testing array basics...\n"
	push_const str_3
	write_string
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	fetch
	write_int
str_4. string "\n"
	push_const str_4
	write_string
	push_reg fp
	push_const 2
	add
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
	push_const 3
	add
	fetch
	write_int
str_7. string "\n"
	push_const str_7
	write_string
	push_reg fp
	push_const 2
	add
	push_const 4
	add
	fetch
	write_int
str_8. string "\n"
	push_const str_8
	write_string
	push_reg fp
	push_const 7
	add
	push_const 0
	add
	fetch
	write_char
str_9. string "\n"
	push_const str_9
	write_string
	push_reg fp
	push_const 7
	add
	push_const 1
	add
	fetch
	write_char
str_10. string "\n"
	push_const str_10
	write_string
	push_reg fp
	push_const 7
	add
	push_const 2
	add
	fetch
	write_char
str_11. string "\n"
	push_const str_11
	write_string
	push_reg fp
	push_const 7
	add
	push_const 3
	add
	fetch
	write_char
str_12. string "\n"
	push_const str_12
	write_string
	push_reg fp
	push_const 7
	add
	push_const 4
	add
	fetch
	write_char
str_13. string "\n"
	push_const str_13
	write_string
str_14. string "Testing array & inc dec...\n"
	push_const str_14
	write_string
	push_reg fp
	push_const 2
	add
	push_const 0
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
	write_int
str_15. string "\n"
	push_const str_15
	write_string
	push_reg fp
	push_const 2
	add
	push_const 1
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
	push_const 1
	add
	write_int
str_16. string "\n"
	push_const str_16
	write_string
	push_reg fp
	push_const 2
	add
	push_const 2
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
	write_int
str_17. string "\n"
	push_const str_17
	write_string
	push_reg fp
	push_const 2
	add
	push_const 3
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
	write_int
str_18. string "\n"
	push_const str_18
	write_string
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	fetch
	write_int
str_19. string "\n"
	push_const str_19
	write_string
	push_reg fp
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
	push_const 2
	add
	push_const 2
	add
	fetch
	write_int
str_21. string "\n"
	push_const str_21
	write_string
	push_reg fp
	push_const 2
	add
	push_const 3
	add
	fetch
	write_int
str_22. string "\n"
	push_const str_22
	write_string
str_23. string "Testing pointer array with inc dec...\n"
	push_const str_23
	write_string
	push_reg fp
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 2
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
	push_const 12
	add
	push_const 0
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 12
	add
	push_const 1
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 1
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 12
	add
	push_const 2
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 2
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 12
	add
	push_const 3
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 3
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 12
	add
	push_const 4
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 4
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 12
	add
	push_const 0
	add
	fetch
	fetch
	write_int
str_24. string "\n"
	push_const str_24
	write_string
	push_reg fp
	push_const 12
	add
	push_const 1
	add
	fetch
	fetch
	write_int
str_25. string "\n"
	push_const str_25
	write_string
	push_reg fp
	push_const 12
	add
	push_const 2
	add
	fetch
	fetch
	write_int
str_26. string "\n"
	push_const str_26
	write_string
	push_reg fp
	push_const 12
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_27. string "\n"
	push_const str_27
	write_string
	push_reg fp
	push_const 2
	add
	push_const 4
	add
	fetch
	write_int
str_28. string "\n"
	push_const str_28
	write_string
	push_reg fp
	push_const 12
	add
	push_const 0
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
	write_int
str_29. string "\n"
	push_const str_29
	write_string
	push_reg fp
	push_const 12
	add
	push_const 1
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	push_const 1
	add
	write_int
str_30. string "\n"
	push_const str_30
	write_string
	push_reg fp
	push_const 12
	add
	push_const 2
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
	write_int
str_31. string "\n"
	push_const str_31
	write_string
	push_reg fp
	push_const 12
	add
	push_const 3
	add
	fetch
	push_reg sp
	fetch
	push_reg sp
	fetch
	fetch
	push_const 1
	sub
	assign
	fetch
	write_int
str_32. string "\n"
	push_const str_32
	write_string
	push_reg fp
	push_const 12
	add
	push_const 0
	add
	fetch
	fetch
	write_int
str_33. string "\n"
	push_const str_33
	write_string
	push_reg fp
	push_const 12
	add
	push_const 1
	add
	fetch
	fetch
	write_int
str_34. string "\n"
	push_const str_34
	write_string
	push_reg fp
	push_const 12
	add
	push_const 2
	add
	fetch
	fetch
	write_int
str_35. string "\n"
	push_const str_35
	write_string
	push_reg fp
	push_const 12
	add
	push_const 3
	add
	fetch
	fetch
	write_int
str_36. string "\n"
	push_const str_36
	write_string
str_37. string "Testing unary pointer ...\n"
	push_const str_37
	write_string
	push_reg fp
	push_const 17
	add
	push_reg sp
	fetch
	push_const 100
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 17
	add
	fetch
	write_int
str_38. string "\n"
	push_const str_38
	write_string
	push_reg fp
	push_const 17
	add
	fetch
	write_int
str_39. string "\n"
	push_const str_39
	write_string
	push_const Lglob+23
	push_reg sp
	fetch
	push_reg fp
	push_const 17
	add
	assign
	fetch
	shift_sp -1
	push_const Lglob+23
	fetch
	fetch
	write_int
str_40. string "\n"
	push_const str_40
	write_string
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	fetch
	write_int
str_41. string "\n"
	push_const str_41
	write_string
	push_reg fp
	push_const 20
	add
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	assign
	fetch
	shift_sp -1
	push_reg fp
	push_const 20
	add
	fetch
	fetch
	write_int
str_42. string "\n"
	push_const str_42
	write_string
	push_const Lglob+23
	fetch
	push_reg sp
	fetch
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	fetch
	push_reg fp
	push_const 20
	add
	fetch
	fetch
	sub
	push_reg fp
	push_const 2
	add
	push_const 0
	add
	fetch
	add
	assign
	fetch
	shift_sp -1
	push_const Lglob+23
	fetch
	fetch
	write_int
str_43. string "\n"
	push_const str_43
	write_string
	push_const Lglob+23
	fetch
	fetch
	write_int
str_44. string "\n"
	push_const str_44
	write_string
	push_reg fp
	push_const 17
	add
	fetch
	write_int
str_45. string "\n"
	push_const str_45
	write_string
main_final:
	push_reg fp
	pop_reg sp
	pop_reg fp
	pop_reg pc
main_end:
Lglob.	data 24
