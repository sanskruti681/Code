#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ;
    struct Node*next;

};
struct Node*head=NULL;
void inserEnd(int value){
    struct Node*newNOde=(struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next =NULL;
if(head==NULL){
    head = newNode;

}
else{
    struct Node*temp=head;
    while(temp->next!=NULL)
        temp =temp->next;

    temp->next=newNode;
}

}

void insertBeginning(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct NOde));
    newNode->data=value;
    newNode->next = head;
    head = newNode;
}
void deleteNode(int value){
    struct Node*temp = head,*prev=NULL;
    if(temp!=NULL&&temp->data==value){
        head=temp->next;
        return;

    }
    while(temp!=NULL&&temp->data==value){
            head=temp->next;
    free(temp);
    return ;


    }
    while(temp!NULL&&temp->data!=value){
        prev=temp;
        temp=temp->next;

    }
    if(temp==NULL){
        printf("value not found!\n");
        return;

    }
    prev->next=temp->next;
    free(temp);



}
void display(){
    struct Node*temp=head;
    if(head==NULL){
        printf("list is empty.\n");
        return ;

    }
    printf("linked list");
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;

    }
    printf("\n");
}
int main(){
    int choice , value;
    while(1){
            printf("\n--Singly linked list menu--\n");
    printf("1.insert at beginning \n");
    printf("2.insert at end\n");
    printf("3.delete a Node\n");
    printf("4.display list\n");
    printf(%"5.exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("enter value:");
        scaf("%d",value);
        insertBeginning(value);
        break;

    case 2:
        printf("enter value:");
        scaf("%d",value);
        insertend(value);
        break;
    case 3:
        printf("enter value to delete:");
        scaf("%d",value);
     deleteNode(value);
        break;
    case 4;
        diaplay():
            break;
    case 5:
        exit(0)
        default ;
        printf("invalide choice!\n");
    }



}

