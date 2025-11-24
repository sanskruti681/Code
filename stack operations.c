#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top =-1;
void push(int value){
if(top==SIZE-1)
    printf("stack overflow ! Cannot push%d\n",value);
    else{
        stack[++top]=value);
        printf("%d pushed to stack\n",)

    }

}
void pop(){
if(top==-1)
   printf("stack underflow! no element to pop\n");
   else
    printf("%d popped from stqack|n",stack[top--]);
   }

   void display(){
       if(tpo==-1)
        printf("stack is empty\n");
       for(int i=top;i>=0;i--)
        printf("%d",stack[i]);
       printf("\n");
   }
