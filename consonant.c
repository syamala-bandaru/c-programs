
#include <stdio.h>

int main() {
   char ch;
   printf("Enter the character \n");
   scanf("%c",&ch);
   int res=!((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'));
   printf("%C is a consonants i.e is:%d",ch,res);
}