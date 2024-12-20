// copy constructor : 
//syntax: classname(const classname &object){
//}
#include<iostream>
using namespace std;
class Value{
    public:
    int num;
    public:
    Value(){  // default constructor
        cout<<"Enter number:";
        cin>>num;
       // num=n;
    }
    Value(const Value &obj){  // copy constructor
        num=obj.num;
    }

    void show(){
        cout<<"Number="<<num<<endl;
    }
};
int main(){
    Value v1;  // object for class
    Value v2=v1;
    v2.show();
}