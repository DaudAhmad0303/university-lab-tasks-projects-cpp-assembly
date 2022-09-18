.386
.MODEL flat,stdcall
.STACK 4096
ExitProcess PROTO,dwExitCode:DWORD
.data
.code
main PROC
	MOV AL, 02H	;
	MOV BL, 04H	;
	MOV DL, 03H	;
	ADD	AL, BL	;
	ADD AL, DL	;
	INVOKE ExitProcess, 0
	main ENDP
END main