// sorting array.
#include<stdio.h>
int main(){
    int arr[]={13,15,12,10,2,8,5};
    int i;
    printf("Print array\n");
    for(i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n Ascending array\n ");
    for(i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if( arr[i]> arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // print array;
    printf("Print array\n");
    for(i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
}