// linear search : 
#include<stdio.h>
int main(){
    int size=7,element=1;
    int arr[]={41,52,63,58,74,96,12};
    printf("Enter element to be searched:");
    scanf("%d",&element);
   int res= search(arr,size,element);

    if(res==-1){
             printf("Element not found");
        }
        else{
            printf(" index=%d element FOUND=%d",res ,element ) ;
        }
    }

// user defined function
int search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element)
        return i;
    }
 return -1;
    
}