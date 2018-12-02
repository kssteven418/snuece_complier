        push_const EXIT
        push_reg fp
        push_reg sp
        pop_reg fp
        jump main
EXIT:
        exit
print:
print_start:
        push_reg fp
        push_const 1
        add
        fetch
        write_int
print_final:
        push_reg fp
        pop_reg sp
        pop_reg fp
        pop_reg pc
print_end:
main:
        shift_sp 1
main_start:
        push_reg fp
        push_const 1
        add
        push_reg sp
        fetch
        push_const 10
        assign
        fetch
        shift_sp -1
        shift_sp 1
        push_const label_0
        push_reg fp
        push_reg fp
        push_const 1
        add
        fetch
        push_reg sp
        push_const -1
        add
        pop_reg fp
        jump print
label_0:
        shift_sp -1
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
