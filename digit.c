
#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int res=(ch>='0')&&(ch<='9');
    printf("%C is a digit alphabet i.e is:%d",ch,res);
}