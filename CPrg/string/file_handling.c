// file handling:
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);
    FILE *pf;
    pf=fopen("G:\\mwf_batch3_4(sandeep)\\CPrg\\string\\data.txt","w+");
    if(pf==NULL){
        printf("File not created.");
    }
    else{
        printf("File created");
        fprintf(pf,"%s",str);
    }
    printf("Data entered success fully.");
}