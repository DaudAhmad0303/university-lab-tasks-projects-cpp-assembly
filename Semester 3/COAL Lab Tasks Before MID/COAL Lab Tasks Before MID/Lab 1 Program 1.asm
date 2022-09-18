.386                 ; Minimum CPU to run this is an Intel 386 
.MODEL flat, stdcall ; Protected mode program 
                     ; using call Windows calls 
.STACK 4096          ; The stack is 4096 bytes in size 
ExitProcess PROTO, dwExitCode:DWORD 
                     ; ExitProcess is an MS-Windows ; procedure 
                     ; DumpRegs is a procedure in Irvine32.inc 
                     ; dwExitCode is a 32-bit value
.data
.code
main PROC
 
    mov eax, 8 
 
    INVOKE ExitProcess, 0    ; INVOKE is a directive that calls procedures. 
                             ; Call the ExitProcess procedure. Pass back a return
                             ; code of zero.
    main ENDP 
END main