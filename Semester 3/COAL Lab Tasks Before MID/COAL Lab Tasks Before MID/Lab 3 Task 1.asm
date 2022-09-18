INCLUDE c:\Irvine\Irvine32.inc
.MODEL flat,stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
num DWORD 25 DUP(1)
.code
main PROC
	mov edi, OFFSET num
	mov ecx, LENGTHOF num
	mov eax, 0

L1:
	add eax, [edi]
	add edi, 4
	sub ecx, 1
	jnz L1


	INVOKE ExitProcess, 0
	main ENDP
END main


