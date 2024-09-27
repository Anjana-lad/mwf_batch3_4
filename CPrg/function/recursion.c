// recursion : function calling itself .
//program to find sum of n natural numbers;
// #include<stdio.h>
// int sum(int num){
//     if(num >0){
//         return num+sum(num-1);
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     printf("Sum of numbers=%d",sum(num));
// }

// factorial using recursion
#include<stdio.h>
int fact(num){
    if(num>0){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Factorial of given number =%d",fact(num));
}