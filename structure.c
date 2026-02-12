#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[10];
    float marks;
};
int main(){
    struct Student s1={101,"Priya",89.5};
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%2f\n",s1.marks);
    struct Student s2={102,"Donald Trump",98.5};
    printf("ID:%d\n",s2.id);
    printf("Name:%s\n",s2.name);
    printf("Marks:%.2f\n",s2.marks);
    struct Student s3={103,"Sanskruti",99.5};
    printf("ID:%d\n",s3.id);
    printf("Name:%s\n",s3.name);
    printf("Marks:%2f\n",s3.marks);


    return 0;
}
