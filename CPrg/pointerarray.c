// pointer with array;
#include<stdio.h>
int main(){
    int arr[5]={5,8,15,25,36};
    int *ptr1,*ptr2;
    ptr1=&arr[0];  
    ptr2=&arr[4];
    // for(int i=0;i<=4;i++){
    //     ptr[i]=&arr[i];
    //     printf("arr[%d]=%d\n ",arr[i],ptr[i]);
    // }

    printf("\n Address of 0 index=%d",ptr1);
    printf("\n Address of last index=%d",ptr2);
    ptr1++;
      printf("\n Address of 0 index=%d",ptr1);
    ptr2--;
    printf("\n Address of last index=%d",ptr2);

    *ptr1=*ptr1+5;
    printf("Value st 0 index=%d",*ptr1);
}