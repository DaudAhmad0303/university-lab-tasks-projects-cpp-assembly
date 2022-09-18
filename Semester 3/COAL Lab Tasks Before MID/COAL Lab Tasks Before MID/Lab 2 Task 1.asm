INCLUDE Irvine32.inc
INCLUDELIB Irvine32.lib
.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
.code
main PROC
; Program 1 Result is with carry
	MOV AL, 0F0H; Load the value to 0F0H
	MOV BL, 10H; Load the value to 10H
	ADD AL, BL; Addition
	call DumpRegs

; Program 2 Result is without carry

	MOV AL, 01H; Load the value to 01H
	MOV BL, 02H; Load the value to 02H
	ADD AL, BL ; Addition of above two numbers generates carry and carry flag is set CY=0, AL=03H
	call DumpRegs

; Program 3 
	MOV AL, 01H ; Load the value to 01H
	ADD AL, 02H ; Addition of AL and immediate data 02 gives result as CY=0, AL=03H
	call DumpRegs

; Program 4
	MOV AL, 01H  ; Load the value to 01H
	ADD AL, 02H	 ; Addition of AL and immediate data 02 gives result as CY=0, AL=03H
	MOV [EBX], AL; Load the value of AL register in memory address i.e. EBX
	Call DumpRegs
; Program 5 Use of ADC Instruction
	MOV AL, 0F0H	; Load the value to 0F0H
	MOV BL, 10H		; Load the value to 10H
	ADD AL, BL		; Addition of above two numbers generates carry and carry flag is set CY=1, AL=00H
	ADC AL, 20H		; ADC adds carry flag, contents of AL and 20H.Result=21H (If ADD instruction is used result will be 20H)
	call DumpRegs

INVOKE ExitProcess, 0
main ENDP
END main