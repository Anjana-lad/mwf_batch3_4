// fibonacci series : 0,1,1,2,3,5,8,13,21,34,...
#include<stdio.h>
int main(){
    int n1=0,n2=1,num;
    printf("Enter number where to stop:");
    scanf("%d",&num);
    printf("%d,%d,",n1,n2);
    int count=2;
    while (count<=num)
    {
        int temp=n1+n2;
        n1=n2;
        n2=temp;
    count++;
    printf("%d,",temp);
    }
}

// series to practice
//1,2,3,6,9,18,27,54..