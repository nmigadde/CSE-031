		.data
Prompt2: .asciiz "\n Enter an integer: "
PosSum:  .asciiz "\n Sum of positive number is: "
NegSum:  .asciiz "\n Sum of negative number is: "

	.text
li $s0, 0 
li $s1, 0

loop:
li 	$v0, 4
la 	$a0, Prompt2
syscall
li 	$v0, 5
syscall
move 	$t0, $v0
beqz 	$t0, done.
bltz 	$t0, negativeNum
add 	$s0, $t0
jskip
negativeNum;
add 	$s1, $s1, $t0
skip:
jloop

done:
li 	$v0, 4
la 	$a0, PosSum
syscall
move 	$a0, $s0
li 	$v0, 1
syscall
li 	$v0, 4
la 	$a0, negSum
syscall
move 	$a0, $s1
li 	$v0, 1
syscall.

output 
