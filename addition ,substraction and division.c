#include <stdio.h>

int main()
{
    int a,b;
    int add,sub,mul,div;
    printf("enter two integers:");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("addition of two numbers:%d\n",add);
    printf("subtraction of two numbers:%d\n",sub);
     printf("multiplication of two numbers:%d\n",mul);
     printf("division of two numbers:%d\n",div);
     return 0;
}
