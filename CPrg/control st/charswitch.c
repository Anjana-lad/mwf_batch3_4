// to find weather the char given is vowels or consonant.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter ch:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("It is a vowel.");
        break;
    default:
        printf("It's a consonants");
        break;
    }
}
/*
print all symbols as char;
(+,-,*,/,%)
case '+':
printf("Addition=%d",n1+n2);
break; */