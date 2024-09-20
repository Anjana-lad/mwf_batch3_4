// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             if(col%2==0){
//                 printf("0");
//             }
//             else{
//             printf("1");
//            }
//         } 
//     printf("\n");
//     }
// }


//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=4;space>=row;space--){
//             printf("   ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" * ");
//         }
//     printf("\n");
//     }
// }

//             1
//           2 3
//         4 5 6
//      7 8 9 10
//11 12 13 14 15

// #include<stdio.h>
// int main(){
//     int row,col,space,num=1;
//     for(row=1;row<=5;row++){
//         for(space=4;space>=row;space--){
//             printf("  ");
//         }
//         for(col=5;col>=1;col--){
//             if(row>=col){
//                 printf("  %d",num);
//                 num++;
//             }
//         }
//         printf("\n");
//     }
// }

//    5
//   45
//  345
// 2345
//12345

#include<stdio.h>
int main(){
    int row,col;
    for(row=5;row>=1;row--){
        for(col=1;col<=5;col++){
            if(row<=col){
            printf("%d",col);
        }
        else{
            printf(" ");
        }
    }
       printf("\n");
  }
}
