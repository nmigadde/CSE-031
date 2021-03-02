.text
.globl main

main:	li $s0,5 #x=5
	li $s1,10 #y=10

	move $a0,$s0
	move $a1,$s1 #passing arguments to sum
	jal sum

	add $s1,$s1,$v0 #get y + sum(x,y)
	add $s1,$s1,$s0 #get x+ y + sum(x,y)
	li $v0,1
	move $a0,$s1
	syscall #print value of y
	li $v0,10 #terminate call
	syscall

sum:	addi $sp, $sp, 4
	subu $sp,$sp,4 # point to the place for the new item,
	sw $ra,($sp) # store the contents of $ra as the new top.

	move $t1, $a0 #store parameters m
	move $t2, $a1 #store parameters n

	add $a0,$t2,1 #get n+1
	add $a1,$t1,1 #get m+1
	jal sub
	move $t3,$v0 #store result to t3

	sub $a0,$t1,1 #get m-1
	sub $a1,$t2,1 #get n-1
	jal sub
	move $t4,$v0 #store result to t3

	add $v0,$t3,$t4 #return p+q
	lw $ra,($sp) # store the contents of $ra as the new top.
	addu $sp,$sp,4 # point to the place for the new item,
	addi $sp, $sp, 4
	jr $ra

sub:	sub $v0,$a1,$a0 #return b-a
	jr $ra
