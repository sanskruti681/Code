#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("data.txt","w");
    if(fp==NULL){
        printf("FIle cannot be opned !\n");
        return 1;

    }
    fprintf(fp , "welcome to file handling in c\n");
    fprintf(fp, "this text is written to the file.\n");

    fclose(fp);
    printf("data written successfully.\n");
    return 0;




}
