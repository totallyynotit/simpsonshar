__declspec( naked ) void fn_8004E81C( void ) {
    __asm {
        subi r3, r3, 4
        b lbl_8004E84C
        addi r3, r3, -4
        b lbl_8004E840
        addi r3, r3, -4
        b lbl_8004E834
        addi r3, r3, -4
        b lbl_8004E828
    lbl_8004E828:
        blr
        blr
        blr
        blr
        blr
        blr
    lbl_8004E834:
    lbl_8004E840:
    lbl_8004E84C:
    }
}
