	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	l_.str.1(%rip), %rdi
	movl	$97, %esi
	movl	$12, %edx
	callq	_ft_memset
	leaq	L_.str(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	leaq	l_.str.1(%rip), %rdi
	movl	$97, %esi
	movl	$12, %edx
	movl	$2, %ecx
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	callq	___memset_chk
	leaq	L_.str.2(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	xorl	%r8d, %r8d
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movl	%r8d, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\t   %s \n"

	.section	__TEXT,__const
l_.str.1:                               ## @.str.1
	.space	2

	.section	__TEXT,__cstring,cstring_literals
L_.str.2:                               ## @.str.2
	.asciz	"origin %s \n"

.subsections_via_symbols
