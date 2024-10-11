// dynamic array
#include<stdio.h>
int main(){
    int arr[10];
    int i, max;
    printf("Enter values for array:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
     printf("Printing array:\n");
    for(int i=0;i<10;i++){
        printf("arr[%d]=%d\n ",i,arr[i]);
    }
    max=arr[0];
    for(i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Max number in array=%d",max);

    // printf("Enter index  to search:");
    // scanf("%d",&num);
    // for(i=0;i<num;i++);
    //     if(i==num){
    //         printf("arr[%d]=%d",i,arr[i]);
    //     }
    //     else{
    //         printf("Not found");
    //     }
}