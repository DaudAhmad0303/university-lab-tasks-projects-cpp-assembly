INCLUDE C:\Irvine\Irvine32.inc
INCLUDELIB C:\Irvine\Irvine32.lib
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
str1 BYTE "Sample string, in color", 0dh, 0ah, 0
.code
main PROC
	mov ecx, 5
	mov eax, 10
	l1:
		call SetTextColor
		mov edx, OFFSET str1
		call WriteString
		call GetTextColor
		dec eax
		loop l1
	call waitMsg
	
	COMMENT & 
	MOV AL, 01H; Load the value to 01H
	ADD AL,02H; Addition of AL and immediate data 02 gives result as CY=0, AL=03H
	MOV [EBX], AL
	&
	exit
main ENDP
END main