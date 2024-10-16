// pointer : pIt is used to store the address of another variable.
#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int *ptr;
    ptr=&num; // referencing value;
    printf("address of  %d = %p",num,ptr);
    printf("\n value at pointer= %d",*ptr);
}