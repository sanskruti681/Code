#include <stdio.h>


int main()

{
    char name[]= "sanskruti";
int i;
int j;

 for(i=0;name[i]!='\0';i++){
    for(j=1;j<=i;++j){
   printf("%c", name[j]);

        }
        printf("\n");
        }

printf("%s\n",name);

   return 0;

 }

