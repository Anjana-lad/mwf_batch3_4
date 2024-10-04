// operation on 2d array : performing  addition subtraction and multiplication on 2 2d arrays.
#include<stdio.h>
int main(){
    int arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    int r,c,row,col;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    printf("Enter elements for array1:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter elements for array2:");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\nArray1\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
           printf("%d\t",arr1[row][col]);
        }
    }
    printf("\n Array2\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr2[row][col]);
        }
    }
    //addition logic:
     for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    printf("\nsum array\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",sum[row][col]);
        }
    }
// subtraction logic:
for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sub[row][col]=arr1[row][col]- arr2[row][col];
        }
    }
    printf("\nsum array\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",sub[row][col]);
        }
    }
    // multiplication logic:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]* arr2[k][col];
            }
        }
    }
    printf("\nsum array\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",mul[row][col]);
        }
    }
}