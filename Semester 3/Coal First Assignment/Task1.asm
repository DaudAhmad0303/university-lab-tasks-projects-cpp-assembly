INCLUDE c:\Irvine\Irvine32.inc
INCLUDELIB c:\Irvine\Irvine32.lib
.386
.model flat,stdcall
.stack 4096
ExitProcess PROTO dwExitCode:dword
.data 
MAIN_MENU DB "Caculator",0DH,0AH
DB "Press '1' For Addition",0DH,0AH 
DB "Press '2' For Subtraction",0DH,0AH
DB "Press '3' For Multiplication",0DH,0AH 
DB "Press '4' For Division",0DH,0AH 
DB "Press '5' For EXIT",0DH,0AH 
DB "Press '6' Return to Main Menu",0DH,0AH 
DB "*----------------------------------*",0DH,0AH 
DB "*----------------------------------*",0DH,0AH 
DB "Enter your CHOICE: ",0
NUM1 byte 0DH,0AH,"Enter First Number: ",0
NUM2 byte 0DH,0AH,"Enter Second Number: ",0
ADDI byte 0DH,0AH,"FOR Addition",0
SUBT byte 0DH,0AH,"FOR Subtraction",0
MULT byte 0DH,0AH,"FOR Multipication",0
DIVI byte 0DH,0AH,"FOR Division",0DH,0AH,0
ANS byte 0DH,0AH,"Answer: ",0
CONTINUE byte 0DH,0AH,"Do You Want to continue? (1=Yes and 2=No): ",0
Z byte 0DH,0AH,"Diclaimer--A number can't be divided by 0. So try another one ",0DH,0AH,0
op1 DWORD ?
op2 DWORD ? 
 operator byte ? 
 con byte ?
 .code
 main PROC
 START:
 MOV EDX, OFFSET MAIN_MENU
 call WriteString
 call Readint
 mov operator,al
 mov al,operator
 cmp al,1
 je ADDITION
 cmp al,2
 je SUBTRACTION
 cmp al,3
 je MULTIPLICATION
 cmp al,4 
 je DIVISION
 cmp al,5
 je Exe
 cmp al,6
 je START

 ADDITION:              
 MOV EDX,OFFSET ADDI
 call WriteString
 mov edx,offset NUM1
 call WriteString
 call Readint
 mov op1,eax
 mov edx,offset NUM2
 call WriteString
 call Readint
 mov op2,eax
 mov eax,op1
 mov ebx,op2
 add eax,ebx
 ;PRINT RESULT
 mov edx,offset ANS
call WriteString
call WriteInt
; FOR CONTINUE
mov edx,offset CONTINUE
call WriteString
call Readint
mov con,al
cmp con,1
je START
cmp con,2
je Exe

SUBTRACTION:                               
 MOV EDX,OFFSET SUBT
 call WriteString
 mov edx,offset NUM1
 call WriteString
 call Readint
 mov op1,eax 
 mov edx,offset NUM2 
 call WriteString
 call Readint
 mov op2,eax
 mov eax,op1
 mov ebx,op2
 sub eax,ebx
 ;PRINT RESULT
 mov edx,offset ANS
call WriteString
call WriteInt
; FOR CONTINUE
mov edx,offset CONTINUE
call WriteString
call Readint
mov con,al
cmp con,1 
je START
cmp con,2
je Exe

MULTIPLICATION:                      
 MOV EDX,OFFSET MULT
 call WriteString
 mov edx,offset NUM1
 call WriteString
 call Readint
 mov op1,eax
 mov edx,offset NUM2
 call WriteString
 call Readint
 mov op2,eax
 mov eax,op1
 mov ebx,op2
 mul ebx
 ;PRINT RESULT
 mov edx,offset ANS
call WriteString
call WriteInt
; FOR CONTINUE
mov edx,offset CONTINUE
call WriteString
call Readint
mov con,al
cmp con,1
je START
cmp con,2
je Exe
  
 DIVISION:                         
  MOV EDX,OFFSET DIVI
 call WriteString
 mov edx,offset NUM1
 call WriteString
 call Readint
 mov op1,eax
 mov edx,offset NUM2
 call WriteString 
 call Readint 
 mov op2,eax
 mov eax,op1
 mov ebx,op2
 div bl
 ;PRINT RESULT
 mov edx,offset ANS
call WriteString
call WriteInt
; FOR CONTINUE
mov edx,offset CONTINUE
call WriteString
call Readint
mov con,al
cmp con,1
je START 
cmp con,2
je Exe

Exe:                 
mov edx,offset Exe
call WriteString
loop1:
 mov edx,offset Z
 call WriteString
 call Readint

INVOKE ExitProcess,0
main ENDP
end main