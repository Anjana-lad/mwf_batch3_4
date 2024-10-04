// static array;
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,50,01};  //static array
    printf("Printing array:");
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n ",i,arr[i]);
    }
}