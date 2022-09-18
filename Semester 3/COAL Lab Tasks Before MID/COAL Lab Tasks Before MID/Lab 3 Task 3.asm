INCLUDE C:\Irvine\Irvine32.inc
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
num DWORD 1, 2, 3, 4, 5, 6, 7, 8, 9, 0
num1 DWORD 10 DUP(?)
.code
main PROC
	mov ebx, OFFSET num + ((LENGTHOF num-1)*4)
	mov edi, OFFSET num1
	mov ecx, LENGTHOF num
	mov eax, 0
L1:
	mov eax, [ebx]
	mov [edi], eax
	sub ebx, 4
	add edi, 4
	sub ecx, 1
	jnz L1
	
	mov ebx, 0
	mov ecx, LENGTHOF num1
L2:
	mov eax, num1[ebx]
	call WriteInt
	call Crlf
	add ebx, 4
	sub ecx, 1
	jnz L2


	call Crlf
	call WaitMsg
	INVOKE ExitProcess, 0
	main ENDP
END main