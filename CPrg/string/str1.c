#include<stdio.h>
int main(){
 int i;
 char str[20],str2[20];

 printf("Enter string:");
 //scanf("%[^\n]s",str);
 gets(str);
 printf("str=%s",str);

 printf("Enter str2:");
 gets(str2);
 //scanf("%[^\n]s",str2);
 printf("\n Str2=%s",str2);    
}