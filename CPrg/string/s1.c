#include<stdio.h>
#include<string.h>
int equ(char str[20],char str2[20]){
            printf("Enter string 1:\n");
            scanf("%[^\n]s",str);
            printf("str=%s",str);
            printf("Enter string 2:\n");
            scanf("%[^\n]s",str2);
}
int main(){
    int choice;
    char str[20],str2[20];
    printf("Main Menu\n");
    printf("\t 1.Equality\n");
    printf("\t 2.String Copy\n");
    printf("\t 3.Concat\n");
    printf("\t 4.Show\n");
    printf("\t 5.Reverse\n");
    printf("\t 6.Palindrome\n");
    printf("\t 7.Sub String\n");
    printf("\t 8.Exit\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);

    switch (choice){
        case 1:
        equ(str,str2);
            // printf("Enter string 1:\n");
            // scanf("%[^\n]s",str);
            // printf("Enter string 2:\n");
            // scanf("%[^\n]s",str2);
            printf("\nString for Equality =%d",strcmp(str,str2));
            break;
        default:
             printf("Invalid");
            break;
    }
    
}