// matrix (1d array) summation
#include<iostream>
using namespace std;
class Matrix{
    public:
    int arr[2][2],i,matx[2][2];
    public:
    int get_data(){
        cout<<"Enter array elements:";
        for(i=0;i<2;i++){
            for(int j=0;j<2;j++){
            cin>>arr[i][j];
         }
        }
    }
    int print_arr(){
        cout<<"\nPrinting array:\n";
        for(i=0;i<2;i++){
            cout<<"\n";
            for(int j=0;j<2;j++){
            cout<<arr[i][j];
          }
        }
    }
    int operator +(Matrix &x){
        for(i=0;i<2;i++){
            for(int j=0;j<2;j++){
            matx[i][j]=arr[i][j] + x.arr[i][j];
        }
        }
        cout<<"\nMatrix="<<endl;
        for(i=0;i<2;i++){
            cout<<"\n";
            for(int j=0;j<2;j++){
            cout<<matx[i][j];
        }
        }
        }
};
int main(){
    Matrix m,n;
    m.get_data();
    n.get_data();
    m.print_arr();
    n.print_arr();
    m+n;   
}