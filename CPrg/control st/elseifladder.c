// else if ladder.
//multiple elseif condition
// program to find maximum of 3 numbers.
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is max",x);
    }
    else if(y>x && y>z){
        printf("%d is max",y);
    }
    else if (x==y && x==z){
        printf("all are same.");
    }
    else{
        printf("%d is max",z);
    }
}