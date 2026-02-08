#include<stdio.h>
#include<stdlib.h>

    struct Student{
        int id;
        char name[30];
        int sem ;
        char branch[50];
        char dept[20];

    };


    int main(){
        struct Student s[5];
        int i ;

        for(i=0;i<5;i++){
        printf("enter the details for student %d\n",i+1);
        printf("ID :");
        scanf("%d" ,&s[i].id);

        printf("name");
        scanf("%[^\n]s" , s[i].name);

        printf("semester");
        scanf("%s", &s[i].sem);

        printf("branch");
        scanf("%s",s[i].branch);

        printf("department");
        scanf("%[^\n]s", s[i].dept);

        printf("----------------------------------\n");


    }
    printf("\n %-10s %-20s %-5s %-10s %-20s\n" , "ID" , "name " , "sem" , "branch" ,"department");

    printf("------------------------------------------------\n");

    for(i=0 ; i<5;i++){
        printf("%-10d %-20s %-5d %-10s %-20s\n" ,
               s[i].id , s[i].name, s[i].sem ,s[i].branch, s[i].dept);


    }
    return 0;
}
