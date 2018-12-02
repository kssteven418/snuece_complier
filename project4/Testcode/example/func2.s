        push_const EXIT
        push_reg fp
        push_reg sp
        pop_reg fp
        jump main
EXIT:
        exit
test:
test_start:
        push_reg fp
        push_const -1
        add
        push_const -1
        add
        push_reg fp
        push_const 1
        add
        fetch
        assign
        jump test_final
test_final:
        push_reg fp
        pop_reg sp
        pop_reg fp
        pop_reg pc
test_end:
main:
        shift_sp 4
main_start:
        push_reg fp
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
        push_reg sp
        fetch
        push_const 2
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 3
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
        push_reg sp
        fetch
        shift_sp 1
        push_const label_0
        push_reg fp
        push_reg fp
        push_const 1
        add
        fetch
        push_reg fp
        push_const 2
        add
        fetch
        push_reg fp
        push_const 3
        add
        fetch
        push_reg sp
        push_const -3
        add
        pop_reg fp
        jump test
label_0:
        assign
        fetch
        shift_sp -1
        push_reg fp
        push_const 4
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
Lglob.  data 0
