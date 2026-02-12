#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[]="sanskruti";
   int i,j;
   for(i=0;name[i]!='\0';i++){
    for(j=0;j<=i;j++){
        printf("%c",name[j]);
    }
    printf("\n");
   }
   printf("%s\n",name);

   return 0;

}
