#include <stdio.h>
#include <stdlib.h>

 typedef struct {
    int emp_id ;
    char name[20];
    float salary ;
}Employee;

int main (){
  Employee  e1 = {1001 ,"priya", 45000.50};
    Employee e2= {1002 , "donald trumph",50000.00};
    printf("ID : %d\n", e1.emp_id);
    printf("NAME : %s\n", e1.name);
    printf("salary: %.2f\n", e1.salary);

    printf("ID : %d\n", e2.emp_id);
    printf("NAME : %s\n", e2.name);
    printf("salary: %.2f\n", e2.salary);


    return 0;

}
