// if inside if is called nested if.
#include<stdio.h>
int main(){
    char choice;
    printf("M for male \n F for female");
    printf("Enter choice:");
    scanf("%c",&choice);
    int age;
    if(choice=='M' || choice=='m'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=21){
            printf("You are eligible");
        }
        else{
            printf("You are not eligible.");
        }
    }
     else if(choice=='F' || choice=='f'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>=18){
            printf("female is eligible.");
        }
        else{
            printf("female is not eligible.");
        }
    }
    else{
        printf("Invalid choice...");
    }
}