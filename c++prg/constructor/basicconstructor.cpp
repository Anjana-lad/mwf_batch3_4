// constructor: same name as class name;
#include<iostream>
using namespace std;
class Multiply{
    int a,b,c;
 public:
    Multiply(){  // constructor
        cout<<"Enter numbers:";
        cin>>a>>b;
        c=a*b;
        cout<<"Result="<<c<<endl;
    }
};
int main(){
    Multiply mul;
    Multiply m1;
}