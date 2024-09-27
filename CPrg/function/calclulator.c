// using function creating menu driven calc.
#include<stdio.h>
int show(int num1,char ch, int num2,int res){
    printf("%d %c %d=%d",num1,ch,num2,res);
}
int add(int a,int b){
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int res=a-b;
    show(a,'-',b,res);
}
int multiply(int a,int b){
    int res=a*b;
    show(a,'*',b,res);
}
int div(int a,int b){
    int res=a/b;
    show(a,'/',b,res);
}

int main(){
    int num1,num2,choice;
    do{
    printf("Select what to do?");
    printf("\n 1. Addition.");
    printf("\n2. subtraction.");
    printf("\n 3. multiplication.");
    printf("\n 4. Division");
    printf("\n Enter your choice:-");
    scanf("%d",&choice);    

    switch (choice)
    {
    case 1:
            printf("Enter numbers:");
            scanf("%d %d",&num1,&num2);
            add(num1,num2);
        break;
        case 2:
            printf("Enter numbers:");
            scanf("%d %d",&num1,&num2);
            sub(num1,num2);
        break;
            case 3:
            printf("Enter numbers:");
            scanf("%d %d",&num1,&num2);
            multiply(num1,num2);
        break;
            case 4:
            printf("Enter numbers:");
            scanf("%d %d",&num1,&num2);
            div(num1,num2);
        break;
    default:
        printf("Invalid choice;");
        break;
    }
    }while(choice<=4);
}