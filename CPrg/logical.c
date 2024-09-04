//logical operator :AND(&&),OR(||),No (!)
/*
    A B  A&&B A||B    !A
    0 0   0    0      1
    1 0   0    1      0
    0 1   0    1      1
    1 1   1    1      0

*/

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);

    printf("\n Logical and:%d ",num1>20 && num2<20);
    printf("\n Logical OR:%d",num1>20 || num2<20);
    printf("Not of num1=%d",num1!=10);
}

// binary base of 2
//     8 4 2 1
// 0=  0 0 0 0
// 1=  0 0 0 1
// 2=  0 0 1 0
// 3=  0 0 1 1
// 4=  0 1 0 0
// 5=  0 1 0 1
// 6=  0 1 1 0
// 7=  0 1 1 1
// 8=  1 0 0 0
// 9=  1 0 0 1
// 10= 1 0 1 0
// 11= 1 0 1 1
// 12= 1 1 0 0
// 13= 1 1 0 1
// 14= 1 1 1 0
// 15= 1 1 1 1

// 54 : 110110

  