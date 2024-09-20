//relational operator.: <,>,==,!=,>=,<=;
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    printf("\n greater num1>num2=%d",num1>=num2);
    printf("\n Smaller num1<num2=%d",num1<=num2);
    printf("\n Double equal to:%d",num1==num2);
    printf("\n Not equal to=num1!num2=%d",num1!=num2);
}