INCLUDE C:\Irvine\Irvine32.inc
INCLUDELIB C:\Irvine\Irvine32.lib
.386
.MODEL flat, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
;dumpReg PROTO
.data
msg byte "hello world",0,10,13
msg2 byte 0
.code
main proc
	mov edx,0
	mov dl,95 ; X-coordinate
	mov dh,45 ; Y-coordinate
	call gotoxy
	mov edx, offset msg
	call WriteString
	mov ecx,20
	mov edx, offset msg2
	call ReadInt
	call WriteInt
	exit
main endp
end main
invoke exitProcess,0