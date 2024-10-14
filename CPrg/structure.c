// structure is a user  defined data-type.
/* syntax:
struct structure_name{
datatype  member;
datatype and member;

};
 using .(dot )operator assign value the member of structure.
*/

#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float percent;
};  
int main(){
    struct student s1[2];
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