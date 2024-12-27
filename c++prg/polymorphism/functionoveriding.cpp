// function overriding :
#include<iostream>
using namespace std;
class A{
 public:
    int show(){
        cout<<"I am in class A"<<endl;
 }
};
class B :public A{
    public:
    int show(){
        cout<<"I am in class B"<<endl;
    }
};
int main(){
A *ptr; // pointer for  base class 
B b;   // object for child class.
ptr=&b; // reference to base class 
ptr->show();  // call function show();
b.show();  // child class method

}