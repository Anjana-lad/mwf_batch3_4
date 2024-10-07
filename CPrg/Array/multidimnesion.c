// multi-dimension array in this we have 3 size.
// syntax: return_type array_name [table][row][col];
#include<stdio.h>
int main(){
    int i,j,k;
    int arr[3][3][3]={
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {11,12,13},
            {14,1,5},
            {17,18,19}
        },
        {
            {4,5,6},
            {1,2,3},
            {7,8,9}
        }
        };
    // for printing.
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d \t",arr[i][j][k]);
            }
        printf("\n");
        }
    printf("\n");
    }
}