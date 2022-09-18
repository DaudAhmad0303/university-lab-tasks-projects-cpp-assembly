INCLUDE C:\Irvine\Irvine32.inc
.386
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD
.data
var1 DWORD ?
var2 DWORD ?
msg1 BYTE "Enter 1st no", 13,10,0
msg2 BYTE "ENTER 2nd no" ,13,10,0
.code
main PROC
	mov edx,offset msg1
	call WriteString
	call ReadInt
	mov var2,eax
	mov edx,offset msg2
	call WriteString
	call ReadInt
	mov var1,eax
	push var2
	push var1
	call AddNum
	call writeint
exit
AddNum PROC
	push ebp
	mov ebp,esp
	mov eax,0
	mov eax,[ebp+12]
	add eax,[ebp+8]
	pop ebp
	ret
AddNum ENDP
INVOKE ExitProcess,0
main ENDP
END main