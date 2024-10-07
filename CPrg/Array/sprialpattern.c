// 1  2  3  4 5
//16 17 18 19 6
//15 24 25 20 7
//14 23 22 21 8
//13 12 11 10 9

/*
 algorithm:
 step1: define matrix of size defined by user.
 step2: step1 : loop for left to right.
        step2 : loop for right to bottom.
        step3: loop for bottom to left.
        step 4: loop for bottom to top.
 step 3: repeat for inner values till size/2;
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr1[size][size];
    int row=0,col,num=1;
    int end=size-1;
    for(row=0;row<=size/2;row++,end--){
    // //step for outer loop
    for(col=row;col<=end;col++){
        arr1[row][col]=num++;
    }
    for(col=row+1;col<=end;col++){
        arr1[col][end]=num++;
    }
    for(col=end-1;col>=row;col--){
        arr1[end][col]=num++;
    }
    for(col=end-1;col>row;col--){
        arr1[col][row]=num++;
    }
}
    // // printing array
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d ",arr1[row][col]);
        }
    }
}