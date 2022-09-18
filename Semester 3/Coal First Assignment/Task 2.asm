INCLUDE c:\Irvine\Irvine32.inc
INCLUDELIB c:\Irvine\Irvine32.lib
.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO dwExitCode:dword
.data
buffer byte 20 DUP(0)
byteCount DWORD ?
nameSize  DWORD ?
Question  byte  "Enter : "  ,0
Statement byte "Reversed : ",0

.code
main PROC
call clrscr
;moving the cursor
mov dl,26 ;X coordinate
mov dh,15 ;y coordinate
call gotoxy

 mov edx , OFFSET Question
    call WriteString
    mov edx, OFFSET buffer
    mov Ecx, SIZEOF buffer
    call ReadString
    mov nameSize, eax
    push edx
    mov  ecx,nameSize
    mov  esi,0
 
;push string character wise on stack 
L1: movzx eax,buffer[esi]    
    push eax                
    inc  esi
    loop L1
    mov  ecx,nameSize 
    mov  esi,0
 
;pop string in reverse order 
L2: pop  eax               
    mov  buffer[esi],al      
    inc  esi
    loop L2

 
;moving the cursor 
mov dl,37 ;X coordinate
mov dh,21 ;y coordinate
call gotoxy
 
mov edx,offset Statement 
 
call WriteString 
    mov EDX ,OFFSET buffer
    call WriteString
 INVOKE ExitProcess,0
main ENDP
end main 