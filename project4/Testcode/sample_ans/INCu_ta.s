        push_const EXIT
        push_reg fp
        push_reg sp
        pop_reg fp
        jump main
EXIT:
        exit
main:
        shift_sp 2
main_start:
        push_reg fp
        push_const 1
        add
        push_reg sp
        fetch
        push_const 17
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 2
        add
        push_reg sp
        fetch
        push_const 17
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 1
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
str_0. string "\n"
        push_const str_0
        write_string
        push_reg fp
        push_const 1
        add
        fetch
        write_int
str_1. string "\n"
        push_const str_1
        write_string
        push_reg fp
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
        push_const 1
        sub
        write_int
str_2. string "\n"
        push_const str_2
        write_string
        push_reg fp
        push_const 2
        add
        fetch
        write_int
str_3. string "\n"
        push_const str_3
        write_string
main_final:
        push_reg fp
        pop_reg sp
        pop_reg fp
        pop_reg pc
main_end:
Lglob.  data 0
