#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char password[6];
    char Password[]="sans34";
    printf("USERNAME : COMPUTER SCIENCE\n");
    printf("enter the password\n");
    scanf("%s",password);
    if(strcmp(password,Password)==0)
    {
        printf("the password is correct\n");
    }
    else
    {
        printf("the password is wrong\n");
    }
    if("length:%lu",strlen(password)==0)
    {
        printf("the length is valid\n");
    }
    else
    {
        printf("the length is invalid\n");
    }

    return 0;
}
