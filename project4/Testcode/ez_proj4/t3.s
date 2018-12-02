        push_const EXIT
        push_reg fp
        push_reg sp
        pop_reg fp
        jump main
EXIT:
        exit
main:
main_start:
        push_const Lglob+1
        push_reg sp
        fetch
        push_const 3
        assign
        fetch
        shift_sp -1
        push_const Lglob+0
        push_reg sp
        fetch
        push_const Lglob+1
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
        assign
        fetch
        shift_sp -1
main_final:
        push_reg fp
        pop_reg sp
        pop_reg fp
        pop_reg pc
main_end:
Lglob.  data 2
