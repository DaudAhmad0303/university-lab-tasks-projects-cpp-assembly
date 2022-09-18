INCLUDE c:\Irvine\Irvine32.inc
.MODEL flat,stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
;arrayB DWORD 1,2,3,4,5,6,7,8,9,0DH,0AH
fileName BYTE 30 DUP(0)
char BYTE 3
.code
main PROC




COMMENT !	For reading and Writting String on console window 
	mov edx, OFFSET fileName
	mov ecx, SIZEOF fileName
	call ReadString
	call WriteString
!
COMMENT ! 
	mov eax, 500h			;500h is moved in eax register
	call WriteHex			;write the hexadecimal value in eax register
	call crlf				;press an enter on console window
	call Delay				;delay for 500 milliseconds on console
	call WriteBin			;write the Binary value of 500h (which is in eax register)
	call crlf
	call WriteDec
	call crlf
	mov eax, 2345h
	call WriteHex
	call Crlf
!	
COMMENT !	 For the understanding of LOOP instruction
	mov ax, 0
	mov ecx, 10
L1:
	inc ax
	call DumpRegs
	;sub ecx, 1
	loop L1
!
COMMENT !	 For understanding of JMP instruction 
	mov ax, 5
	mov bx, 2
	
	jmp calc

	back: jmp stop

	calc:
	add ax, bx
	jmp back

	stop:
!		
COMMENT !	For checking isDigit Procedure
	mov al, char
	call IsDigit
!
COMMENT !	For reading char which does not echo on console
	call ReadChar
	mov char,al
	mov bl, char
	call DumpRegs
!
COMMENT !	 For Displaying Array on console
	mov esi,OFFSET arrayB
	mov ecx, LENGTHOF arrayB
	mov ebx, TYPE arrayB
	call DumpMem
	call WaitMsg
!	
COMMENT !
	call DumpRegs
	mov eax, 5000h
	call WaitMsg
	call Delay
	call ClrScr
!
	call WaitMsg
	INVOKE ExitProcess, 0
	main ENDP
END main


