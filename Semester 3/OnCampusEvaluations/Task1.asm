INCLUDE C:\Irvine\Irvine32.inc
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
array DWORD 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

.code
main PROC
	mov esi, OFFSET array
	mov ecx, 5
l1:
	mov eax, [esi]
	mov ebx, [esi+4]
	mov [esi], ebx
	mov [esi+4], eax
	add esi, 8
	sub ecx, 1
	jnz l1
	call waitmsg

	INVOKE ExitProcess, 0

main ENDP
END main