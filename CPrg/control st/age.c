// if..else statements
/*
syntax: if(condition){
executable part
}
else{
executable parts
}
*/
// to check weather he/she is able to vote or not
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("Person is able to vote");
    }
    else{
        printf("Person is not able to vote.");
    }
}