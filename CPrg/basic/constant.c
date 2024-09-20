//constant 
#include<stdio.h>
//#define num2 200  // 
int main(){
    int num=100;
    const int num2=200;
    int total=num+num2;
    printf("total=%d",total);
    total=num2+10;
      printf("total=%d",total);
}

// escape sequence:
// 1. "\n"= new line;
// 2. "\t"= tab (space) ;
// 3. "\a, \f" 