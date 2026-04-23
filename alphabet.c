
#include <stdio.h>

int main() {
   char ch;
   printf("Enter the character \n");
   scanf("%c",&ch);
   int res=(ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z');
   printf("%C is a alphabet i.e is:%d",ch,res);
}