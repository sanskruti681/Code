#include <stdio.h>
#include <stdlib.h>

struct Date{
    int day;
    int mon;
    int yr;
    int mrk;
};
struct Student{
    int id;
    char name[20];
    struct Date dob;
    float marks;
};
int main(){
struct Student s1={101,"Kiran",{15,8,2000},85.3};
 printf("Name: %s\n",s1.name);
printf("DOB: %d-%d-%d\n",s1.dob.day,s1.dob.mon,s1.dob.yr);
printf("Marks:%.1f\n",s1.marks);
return 0;
}
