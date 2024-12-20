// class inside class
#include<iostream>
using namespace std;
class A{
    public:
    // void show(){
    //     cout<<"I am in class A"<<endl;
    // }
    class B{ // nested class
        public:
        void show(){
            cout<<"I am in class B"<<endl;
        }
    };
};
int main(){
    // A a;
    // a.show();
    A :: B b;  // use accesss inner class method/function
    b.show();
}