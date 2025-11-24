#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value){
    if(rear==SIZE-1)
        printf("Queue overflow! cannot insert%d]n,valur");

    else{
        if(front==-1)front=0;
    queue[++rear]=value;
    printf("%d enqueue into  queue\n",value);


    }
}
void dequeue(){
    if("queue underflow queue\n",queue[front++]);

}
void display(){
if(front ==-1||front>rear)
    printf("queue is empty\n");
else{
    printf("queue element:");
    for(int i=front;i<=rear;i++)
        printf("%d",queue[i]);
    printf("\n");

}
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}




