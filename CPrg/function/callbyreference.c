// call by reference.

#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter calling function :\n X=%d \n y=%d",*x,*y);
}
int main(){
    int x,y;
    printf("Enter numbers:");
    scanf("%d %d",&x,&y);
    printf("\n Before calling function:\n X=%d \n Y=%d",x,y);
    swap(&x,&y);  // call by referencce
    printf("\n again printing after calling function :\n X=%d \n Y=%d",x,y);
}