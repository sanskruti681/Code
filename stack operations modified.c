#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
char stack[SIZE];
int top =-1;
void push(char ch ){
if(top==SIZE-1)
    printf("stack overflow ! \n");
    else{
        stack[++top]=ch;

    }

}

   void display(){
       int i;
       if(top==-1)
        printf("stack is empty\n");
        else{
                printf("stack element");
       for(int i=top;i>=0;i++)
        printf("%c",stack[i]);

   }

   }

   int main(){
       char name [SIZE];
       int i ;
       printf("enter the name");
       scanf("%s",name);
       for(i=0;i<strlen(name);i++){
      push(name[i]);
       }
       display();
       return 0;
   }
