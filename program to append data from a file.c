#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;

    fp = fopen("data.txt","a");
    if(fp==NULL){
        printf("FIle cannot be opned!\n");
        return 1;

    }
    fprintf(fp,"this line is appended at the end.\n");


        fclose(fp);
        printf("data appended successfully.\n");
        return 0;

}

