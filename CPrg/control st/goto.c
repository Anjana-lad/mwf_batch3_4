// goto statements is used to take the control process from one pace to another.
/*syntax: 
labelname:
 //executable statements
 goto labelname;
*/
// #include<stdio.h>
// int main(){
//     int num;
//     label1:  //labelname for goto
//     printf("Enter num:");
//     scanf("%d",&num);

//     if(num>50){
//         printf("Enter again..");
//         goto label1;  // from where to jump
//     }
//     else{
//         printf("You entered %d",num);
//     }

// }

//print multiplication table:
/*2
4
6
8
10*/
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter num:");
    scanf("%d",&num);
    l1:
    if(i<=10){
        printf("\n %d",num*i);
        i++;
        goto l1;
    }
    else{
        printf("\n thank you");
    }
}