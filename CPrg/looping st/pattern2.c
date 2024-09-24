//      A
//    A B
//  A B C
//A B C D
// #include<stdio.h>
// int main(){
//     int r,c,space;
//     char ch='A';
//     for(r=0;r<=4;r++){
//         for(space=5;space>=r;space--){
//             printf("   ");
//         }
//         for(c=0;c<=r;c++){
//             printf(" %c ",ch+c);
//         }
//     printf("\n");
//     }
// }


// * * * * *
// * * * *
// * * *
// * * 
// *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=row;col--){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
*/

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=5;row>=1;row--){
//         for(col=1;col<=row;col++){
//             printf("%d",col);
//         }
//     printf("\n");
//     }
// }

//  A A A A A
//  * * * *
//  B B B
//  * *
//  C

#include <stdio.h>
int main() {
    int row,col;
    char ch='A';
    for (row=0; row<= 4; row++) {
        for (col = 4; col >=row; col--) {
            if (row % 2 == 0) {
                printf(" %c ", ch);
            } else {
                printf(" * ");
            }
        }
        printf("\n");
        if (row % 2 == 0) {
            ch++; 
        }
    }
}