// nested loop : loop inside loop is called nested loop
//pattern program
/*
 * * * * *
 * * * * *
 * * * * * 
 * * * * * 
 * * * * *
*/
// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
// }

/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
-------------
a
a b
a b c
a b c d
a b c d e
------------
          *
        * *
      * * *
    * * * * 
  * * * * *
*/