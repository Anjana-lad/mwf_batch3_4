// there ar 4 different categories for function.
/*
1.no parameter/arguments and no return statement
2. with argument no return statements;
3. no argument and with return statements; 
4. with arguments with return statement;

*/

// function with no argument  no return
// #include<stdio.h>
// int sum(){  // user defined function
//     int a,b;
//     printf("Enter a and b:");
//     scanf("%d %d",&a,&b);
//     printf("A+B=%d",a+b);
// }
// int main(){
//     sum();
//     sum();
// }

// function with arguments but no return.
// #include<stdio.h>
// int sum(int a,int b){
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     printf("a+b=%d",a+b);
// }
// int main(){
//    int a,b;
//    sum(a,b);
//    sum(a,b);
//    sum(a,b);
// }

// no arguments with return
// #include<stdio.h>
// int sum()
// {
//     int a,b;
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b); 
//     return a+b;
// }
// int main(){
//    // sum();
//     printf("sum=%d",sum());
// }

//with argument with return 
// #include<stdio.h>
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int x,y;
//     printf("enter number=");
//     scanf("%d %d",&x,&y);

//     printf("Sum=%d",sum(x,y));
// }

// factorial 
#include<stdio.h>
int fact(){
   int i, num,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}

int main(){
    fact();
    fact();
}