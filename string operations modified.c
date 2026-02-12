#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    int option;

    printf("enter the first string");
    scanf("%s",&str1);

    printf("enter the second string");
    scanf("%s",&str2);

    printf("enter the option");
    scanf("%d",&option);

    switch(option){
    case 1:
        printf("length of str1,str2:%lu\n",strlen(str1));
        printf("length of str1,str2:%lu\n",strlen(str2));
        strlen(str1);
        strlen(str2);
        break;

    case 2:
        printf("after concatenation:%s\n %s",str1,str2);
        strcat(str2,str1);
        break;

    }

}
