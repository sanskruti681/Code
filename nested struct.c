#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int mon;
    float yr;
};
struct Student{
    int id;
    char name[20];
    struct Date dob; //nested structure
};

int main(){
    struct Student s1={101,"Priya",(15,8,2000)};
    printf("Name:%s\n",s1.name);
    printf("DOB:%d-%d-%d\n",s1.dob.day,s1.dob.mon,s1.dob.yr);
    return 0;
}
