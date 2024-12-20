// inline function to find cube of the given number
#include<iostream>
using namespace std;
inline int cube(int num){
    cout<<"Enter number:";
    cin>>num;
    return num*num*num;
}
int main(){
    int num;
    cout<<"cube="<<cube(num);
    cout<<"cube="<<cube(num);
}