//palindrome number 
#include<stdio.h>
int main(){
    int num,rem,rev=0,ori_num;
    printf("Enter number:");
    scanf("%d",&ori_num);
    num=ori_num;  
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
  //  printf("Reverse number=%d",rev);

    if(ori_num==rev){
        printf("Number is palindrome.");
    }
    else{
        printf("Number is not palindrome.");
    }
}