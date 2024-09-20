// arithmetic operators: +,-,*,/,%,++,--:
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    res=num1+num2;
    printf("\n sum=%d",res);
    res=num1-num2;
    printf("\n subtraction=%d",res);
    res=num1*num2;
    printf("\n multiplication=%d",res);
    res=num1/num2;
    printf("\n division=%d",res);
    res=num1%num2;
    printf("\n modulo=%d",res);
    num1++;
    ++num1;
    printf("\n Num1=%d",num1);
   --num2;
   num2--;
    printf("\n num2=%d",num2);


}
/*
increment/decrement ++/-- (post/pre):
1. num++,num-- :post
2. ++num/--num=pre
by 1+ , by 1-


*/