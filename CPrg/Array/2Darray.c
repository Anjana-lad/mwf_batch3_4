// 2d array is also know as matrix : combination of rows and column.
//syntax: return type arry_name[row][col];
// #include<stdio.h>
// int main(){
//     int row,col;
//     int arr[3][2]={{10,52},{5,8},{9,6}};
//     printf("Printing 2d array:=\n");
//     for(row=0;row<3;row++){
//         for(col=0;col<2;col++){
//             printf("%d ",arr[row][col]);
//         }
//     printf("\n");
//     }
// }

// dynamic array.

#include<stdio.h>
int main(){
    int row,col;
    int arr[3][2];
    printf("Enter array elements:");
    for(row=0;row<3;row++){
        for(col=0;col<2;col++){
            scanf("%d", &arr[row][col]);
        }
    }    
    printf("Printing 2d array:=\n");
    for(row=0;row<3;row++){
        for(col=0;col<2;col++){
            printf("%d ",arr[row][col]);
        }
    printf("\n");
    }
}