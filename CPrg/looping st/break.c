// break ,continue,goto statements: control statements.
// series 
// break;
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter number to stop:");
//     scanf("%d",&num);
//     //1-100;
//     for(int i=1;i<=100;i++){
//         if(i==num){
//             break;
//         }
//         else{
//         printf("%d \t",i);
//        }
//     }
// }

// continue;
// #include<stdio.h>
// int main(){
//     int num,n,j;
//     printf("Enter number:");
//     scanf("%d %d %d",&num,&n,&j);
//     for(int i=1;i<=100;i++){
//         if(i==num || i==n || i==j){
//             continue;
//         }
//         else{
//             printf("%d \t",i);
//         }
//     }
// }

//prime number: divisible by 1 and number itself
#include<stdio.h>
int main(){
    int i,num,count=0;
    printf("Enter number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
}