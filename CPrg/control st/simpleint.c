//simple interest
#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("Enter principal:");
    scanf("%f",&principal);
    printf("Enter rate and time");
    scanf("%f %f",&rate,&time);
    si=(principal*rate*time)/100;
    printf("Simple interest=%f",si);
}
