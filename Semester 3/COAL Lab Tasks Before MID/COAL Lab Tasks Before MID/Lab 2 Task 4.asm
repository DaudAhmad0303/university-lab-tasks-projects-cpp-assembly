.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO dwExitCode:DWORD
.data
	n1 DWORD 10H
	n2 DWORD 10
	r DWORD ?
.code
main PROC
	MOV eax, n1
	MOV edx, n2
	ADD eax, edx
	MOV r, eax

	INVOKE ExitProcess, 0
	main ENDP
END main