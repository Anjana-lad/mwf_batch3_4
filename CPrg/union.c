// union :
#include<stdio.h>
union student{
    int rollno;
    char name[20];
    float percent;
};  
int main(){
    union student s1[2];
    printf("\n Enter details:");
    for(int i=0;i<2;i++){
    printf("\n Enter rollno:");
    scanf("%d",&s1[i].rollno);
    printf("Enter name:");
    scanf("%s", s1[i].name);
    printf("Enter percent:");
    scanf("%f",&s1[i].percent);
    }
    printf("\n Print details:\n ");
    for(int i=0;i<2;i++){
        printf("\n Rollno=%d",s1[i].rollno);
        printf("\n Name=%s",s1[i].name);
        printf("\n Percent=%f",s1[i].percent);
    }
}