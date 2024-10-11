//without using string function strlen get the length of the string
#include<stdio.h>
int main(){
    int len=0;
    char str[20];
    printf("Enter string:");
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    printf("Length of string=%d",len);
}