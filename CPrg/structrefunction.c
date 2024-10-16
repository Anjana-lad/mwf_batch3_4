// structure with function 
#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks[4];
};
int display(struct student s){
    printf("\n student details:\n");
    printf("\n Rollno:%d",s.rollno);
    printf("\n name:%s",s.name);
    for(int i=0;i<4;i++){
        printf("\n Marks=%.2f",s.marks[i]);
    }
}
int main(){
    struct student st[2];
    for(int j=0;j<2;j++){
    printf("Enter rollno:");
    scanf("%d",&st[j].rollno);
    printf("Enter name:");
    scanf("%s",&st[j].name);
    printf("Enter marks:");
    for(int i=0;i<4;i++){
        scanf("%f",&st[j].marks[i]);
     }
    }
    for(int k=0;k<2;k++){
    display(st[k]);
    }
}