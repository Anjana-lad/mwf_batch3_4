// ambiguity problem: 
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am in class a"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"I am in class b"<<endl;
    }
};
class C: public A,B{
    public:
    void display(){
        A::show();
        B::show();
        cout<<"I am in class c"<<endl;
    }   
};
int main(){
    C c;
    c.display();
}