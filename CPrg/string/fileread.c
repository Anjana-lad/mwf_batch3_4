// program to read a file from particular path.
#include<stdio.h>
int main(){
    char str[100];
    FILE *fp;
    fp=fopen("G:\\mwf_batch3_4(sandeep)\\demo\\test.txt","r+");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else{
        printf("\n File found\n ");
        while(fgets(str,100,fp)!=NULL){
            printf("%s",str);
        }
    }
    fclose(fp);
}