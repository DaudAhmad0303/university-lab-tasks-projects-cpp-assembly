INCLUDE C:\Irvine\Irvine32.inc
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
num SDWORD 25 DUP(1)
.code
main PROC
	mov eax, 50
	mov edi, OFFSET num
	mov ecx, LENGTHOF num

L1:
	sub eax, [edi]
	add edi, 4
	sub ecx, 1
	jnz L1

	call WriteInt


	call Crlf
	call WaitMsg
	INVOKE ExitProcess, 0
	main ENDP
END main