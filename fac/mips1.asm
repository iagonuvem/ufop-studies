.data
	msg1: 	asciiz "Digite o primeiro numero"
	msg2:	asciiz "Digite o segundo numero"
	result:	asciiz "O resultado e:"

.text
	li $t0, 4
	la $a0, msg1
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	