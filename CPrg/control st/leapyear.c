//program to find weather the year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    // year /4,year/400,year/100
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("Year is a leap year");
    }
    else{
        printf("Year is not a  leap year");
    }
}