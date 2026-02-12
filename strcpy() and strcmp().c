#include <stdio.h>
#include <string.h>

int main(){
    char str1[30]="Hello";
    char str2[30]="World";
    printf("length of str1:%lu\n",strlen(str1));
    strcat(str1,str2);
    printf("after concatenation:%s\n",str1);
    strcpy(str2,str1);
    printf("copied string:%\n",str2);
    printf("comparison result:%d\n",strcmp(str1,str2));
}
