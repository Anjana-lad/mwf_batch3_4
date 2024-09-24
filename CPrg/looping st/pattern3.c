// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             if((row+col)%2==0){
//               printf("0");
//             } 
//         else{
//             printf("1");
//         }
//         }
//     printf("\n");
//     }
// }


// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             if(row==1 || col==1 || row==5 || col== 5){
//                  printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// *
// * *
// *   *
// *     *
// * * * * *
// #include<stdio.h>
// int main(){
//     int i,col;
//     for(i=1;i<=5;i++){
//         for(col=1;col<=i;col++){
//             if(i==1||col==1||i==col||i==5){
//                   printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//     }
//      printf("\n");
//     }
// }

// * - - - * 
// - * - * -
// - - * - -
// - * - * -
// * - - - *
#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            if(row==col || row+col== 5+1){
                printf("* ");
            }
            else{
                printf("- ");
            }
        }
    printf("\n");
    }
}
