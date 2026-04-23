#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    if(c>a&&c>b)
    {
        printf("large is %d\n",c);
        if(b>a)
        {
            printf("mid is %d\n",b);
            printf("small is %d\n",a);    
        }
        else
        {
            printf("mid is %d\n",a);
            printf("small is %d\n",b);
        }
    }
    else if(b>c&&b>a)
    {
        printf("large is %d\n",b);
        if(c>a){
            printf("mid is %d\n",c);
            printf("small is %d\n",a);
        }
        else {
            printf("mid is %d\n",a);
            printf("small is %d\n",c);
        }
    }
    else if (a>c&&a>b)
    {
        printf("large is %d\n",a);
        if(c>b) {
            printf("mid is %d\n",c);
            printf("small is %d\n",b);
        }
        else{
            printf("mid is %d\n",b);
            printf("small is %d\n",c);
        }
    }
}