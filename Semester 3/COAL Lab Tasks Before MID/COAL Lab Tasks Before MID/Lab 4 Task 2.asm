INCLUDE C:\Irvine\Irvine32.inc
INCLUDELIB C:\Irvine\Irvine32.lib
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
num DWORD 23, 21, 19, 9, 12, 3, 4, 10, 2, 1
.code
main PROC
	mov esi, OFFSET num
	mov ecx, LENGTHOF num
	mov ebx, TYPE num
	call DumpMem
	
	




	call Crlf
	call WaitMsg
	INVOKE ExitProcess, 0
	main ENDP
END main