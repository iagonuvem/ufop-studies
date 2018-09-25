.data
	mens1: 	.asciiz "Digite o primeiro numero"
	mens2:	.asciiz "Digite o segundo numero"
	result:	.asciiz "O resultado e:"

.text
	li $v0, 4
	la $a0, mens1
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	li $v0, 4
	la $a0, mens2
	syscall
	
	li $v0, 5
	syscall
	move $t1, $v0
	
	add $t2, $t1, $t0
	
	li $v0,4
	la $a0, result
	syscall
	
	li $v0,1
	move $a0, $t2
	syscall
	