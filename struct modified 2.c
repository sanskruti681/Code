#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id ;
    char name[10];
    float marks ;
};

int main (){
    struct Student s1 = {101 ,"priya", 98.5};
    struct Student s2= {102 , "donald trumph",50.00};
    printf("ID : %d\n", s1.id);
    printf("NAME : %s\n", s1.name);
    printf("marks: %.2f\n", s1.marks);

    printf("ID : %d\n", s2.id);
    printf("NAME : %s\n", s2.name);
    printf("marks: %.2f\n", s2.marks);



    return 0;

}
