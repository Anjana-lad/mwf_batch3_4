//string : group of characters in a single variable is called string. 
//string function: <string.h>
//'\0' null character string terminator.
// 1. strlen: string length(),
// 2. strcmp: 
// string compare:= 
//                   1.str1>str2=1
//                   2.str1<str2=-1
//                   3.str1==str2=0

//3. strcpy():string copy: strcpy(destination string,string1);
//4. strcat():string concatenate(str1,str2);
#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20],str3[20];
  // int len;
    printf("Enter string1:");
   // gets(str);
    fgets(str,20,stdin);
    //scanf("%s",&str);
   // scanf("%[^\n]s",str);
    printf("Enter string 2:");
   // scanf("%s",&str2);
   gets(str2);

   printf("\n String 1=%s",str);
   printf("\n string 2=%s",str2);
//    len=strlen(str);
//    printf("\n Length of %s=%d",str,len);
   // string compare
  // printf("\n String comparision =%d",strcmp(str,str2));
   // string concatenate:
//   printf("\n String concatenate=%s",strcat(str,str2));

   // string copy : 
 //  printf("\n String copy str3=%s",strcpy(str3,str));
   // 5.string lower;
 //  printf("\n String to lower:=%s",strlwr(str));
   // 6.string upper:
  // printf("\n String Upper =%s",strupr(str2));
   // 7.string reverse:
  // printf("\n Reverse string=%s",strrev(str));
   //8. string inside string; strstr();
   printf("\n String inside string=%s",strstr(str2,"grm"));
   // 9.string character
   printf("\n string inside character=%s",strchr(str2,'a'));
   //10.string set :strset();
   printf("\n String set =%s",strset(str,'d'));
}