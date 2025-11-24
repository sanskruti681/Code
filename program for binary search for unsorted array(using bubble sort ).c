#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[i]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
        }
        return-1;
}
int main(){
    int n,key,result;
    printf("enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubbleSort(arr,n);
    printf("enter value to search:");
    scanf("%d",&key);
    result=binarySearch(arr,n,key);
    if(result!=-1)
        printf("elements found at index %d after sorting\n",result);
    else
        printf("element not found\n");
    return 0;
}
