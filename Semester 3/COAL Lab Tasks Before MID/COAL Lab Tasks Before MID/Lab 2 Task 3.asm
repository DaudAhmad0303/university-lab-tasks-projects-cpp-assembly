.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO dwExitCode:DWORD
.data
.code
main PROC
	MOV AL, 09H
	MOV BL, 03H
	MOV DL, 02H
	SUB AL, BL
	SUB AL, DL

	INVOKE ExitProcess, 0
	main ENDP
END main