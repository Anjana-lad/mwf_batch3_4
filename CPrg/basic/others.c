// ternary operator ?: => (condition)?true part:false part
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    (num1>num2)?printf("Num1 is greater."):printf("Num1 is smaller.");
}