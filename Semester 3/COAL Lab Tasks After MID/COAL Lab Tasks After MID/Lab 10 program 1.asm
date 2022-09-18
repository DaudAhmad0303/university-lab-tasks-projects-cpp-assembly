.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:WORD
.data
.code
main PROC
	mov ah,0
	mov al,'8'	; AX = 0038h
	add al,'2'	; AX = 006Ah
	aaa			; AX = 0100h (ASCII adjust result)
	or ax,3030h ; AX = 3130h = '10' (convert to ASCII)
INVOKE ExitProcess, 0
main ENDP
end main