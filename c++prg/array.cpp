// array : array is used to store same type of value in single variable name.
// 3 types of array.
// 1 dimension array having single size.
// 2D array having 2 size.
// multi-dimension having multiple sizeof

#include<iostream>
using namespace std;
int sort(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[5]={5,2,8,1,7};
   int size=5;
    print_arr(arr,size);
    cout<<endl;
    sort(arr,size);
    print_arr(arr,size);
}