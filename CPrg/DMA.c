// dynamic allocation of memory.
// function 
// 1. malloc
// 2. calloc
// 3. realloc
// 4. free

// program to print sum of naturals numbers
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr,i,sum=0,size;
//     printf("enter number of elements:");
//     scanf("%d",&size);
//     ptr=(int *) malloc(size* sizeof(int));
//     if(ptr==NULL){
//         printf("Memory not available");
//         exit(0);
//     }
//     else{
//         printf("Enter elements:");
//         for(i=0;i<size;i++){
//             scanf("%d",ptr+i);
//             sum+=*(ptr+i);
//         }
//         printf("Sum=%d",sum);
//     }

// }
// program to print sum of naturals numbers using calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i,sum=0,size;
    printf("enter number of elements:");
    scanf("%d",&size);
    ptr=(int *) calloc(size,sizeof(int));
    if(ptr==NULL){
        printf("Memory not available");
        exit(0);
    }
    else{
        printf("Enter elements:");
        for(i=0;i<size;i++){
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
        }
        printf("Sum=%d",sum);
    }
free(ptr);
}