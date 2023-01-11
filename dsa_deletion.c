#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
printf("\n");
}
void delete(int arr[],int index,int size){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100]={1,5,8,7,9};
    int index=2,size=5;
    display(arr,size);
    delete(arr,index,size);
    size=size-1;
    display(arr,size);
    return 0;
}