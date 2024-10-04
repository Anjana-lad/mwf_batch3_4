// dynamic array
#include<stdio.h>
int main(){
    int arr[7];
    int i, num;
    printf("Enter values for array:");
    for(i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
     printf("Printing array:\n");
    for(int i=0;i<7;i++){
        printf("arr[%d]=%d\n ",i,arr[i]);
    }

    printf("Enter index  to search:");
    scanf("%d",&num);
    for(i=0;i<num;i++);
        if(i==num){
            printf("arr[%d]=%d",i,arr[i]);
        }
        else{
            printf("Not found");
        }
}