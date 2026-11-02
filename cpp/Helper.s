	.build_version macos, 27, 0	sdk_version 27, 0
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_Area                           ; -- Begin function Area
	.p2align	2
_Area:                                  ; @Area
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	s0, [sp, #12]
	movi.2d	v0, #0000000000000000
	str	s0, [sp, #8]
	ldr	s0, [sp, #12]
	fcvt	d1, s0
	mov	x8, #34079                      ; =0x851f
	movk	x8, #20971, lsl #16
	movk	x8, #7864, lsl #32
	movk	x8, #16393, lsl #48
	fmov	d0, x8
	fmul	d0, d0, d1
	ldr	s1, [sp, #12]
	fcvt	d1, s1
	fmul	d0, d0, d1
	fcvt	s0, d0
	str	s0, [sp, #8]
	ldr	s0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
