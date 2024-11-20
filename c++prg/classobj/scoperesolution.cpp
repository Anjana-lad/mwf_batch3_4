// use of scope resolution operator (::). to use the value of global variable in main function.
#include<iostream>
using namespace std;
int p=20;  // global variable.
int main(){
    int p=10;  // local variable
    int q=30;

    cout<<"P="<<p+q<<endl;
    cout<<"Q="<<q<<endl;
    cout<<"P="<<::p+p+q<<endl;
}