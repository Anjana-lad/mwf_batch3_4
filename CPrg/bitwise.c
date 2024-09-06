// bitwise operator : &,|,^,~,>>,<<
 /*
    A B    a^b   
    0 0     0
    1 0     1
    0 1     1
    1 1     0
  ~num= -(num+1)
  ~4 =  - (4+1)= -5 
 */ 
#include<stdio.h>
int main(){
  int num1,num2;
  printf("Enter number:");
  scanf("%d %d",&num1,&num2);
  printf("\n Bitwise and(num1 & num2)= %d",num1&num2);
  printf("\n Bitwise or (num1 | num2) =%d",num1|num2);
  printf("\n Bitwise exclusive or(num1 ^ num2)= %d",num1^num2);
  printf("\n Negation/complement operator ~(num1)=%d",~num1);
}