// control  statements/conditional statements 
// 1. simple if statements
// 2. if ..else statements.
// 3. if.. elseif  else statements.
// 4. nested if.
// 5. switch statements
// 6. nested switch statements. 

/*
syntax:
1.if(condition){
//executable statements
}
*/
 //program to check number is positive.
#include<stdio.h>
int main(){
    int num;
    printf("Enter nmumber:");
    scanf("%d",&num);
    if(num>=0){
        printf("Number is positive");
    }
}


