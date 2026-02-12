#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];

    printf("enter the string");
    scanf("%s",&s1);

    printf("enter the second string");
    scanf("%s",&s2);
    int result=strcmp(s1,s2);

    if(result==0)
        printf("%s and %s strings are equal ",s1,s2);

    else if(result>0)
        printf("%s is greater than %s string ",s1,s2);

    else
        printf("%s is smaller than %s string",s1,s2);

    return 0;
}
