// transpose:
#include<stdio.h>
int main(){
    int arr[3][3];
    int row,col;
    printf("Enter elements:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n Array\n");
      for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d",arr[row][col]);
        }
    }
    // transpose array
    printf("\n transpose array\n");
    for(col=0;col<3;col++){
        printf("\n");
        for(row=0;row<3;row++){
            printf("%d",arr[row][col]);
        }
    }
}
