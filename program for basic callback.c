#include<stdio.h>


void sayHello(){
printf("Hello,student! You just called me back!\n");
}

void studentWork(void(*callbackFunc)()){
printf("Student is doing homw work....\n");


callbackFunc();
}
int main(){


  studentWork(sayHello);
  return 0;
  }
