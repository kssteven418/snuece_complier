        push_const EXIT
        push_reg fp
        push_reg sp
        pop_reg fp
        jump main
EXIT:
        exit
main:
        shift_sp 84
main_start:
        push_const Lglob+2
        push_const 2
        add
        push_reg sp
        fetch
        push_const 1000
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 1
        add
        push_reg sp
        fetch
        push_const Lglob+2
        push_const 2
        add
        fetch
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 1
        add
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
Lglob.  data 10
