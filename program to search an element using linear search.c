#include <stdio.h>
int main(){
 int arr[5]={10,20,30,45,50};
 int i ,key,found =0;
 printf("Enter element to search:");
 scanf("%d",&key);
 for(i=0;i<5;i++){
    if(arr[i]==key){
    found =1;
    break;


 }
}
  if(found)

    printf("element %d found at position %d\n",key,i+1);
else
    printf("element %d not found\n,key");
    return 0;
    }

