// operator overloading. 
// syntax: return_type operator (operator symbol) (classname &object name)
#include<iostream>
using namespace std;
class overload{
    public:
    int num;
    public:
    int get_num(){
        cout<<"Enter number:";
        cin>>num;
    }
    int operator  >(overload &obj){
        if(num>obj.num){
            cout<<"num="<<num;
        }
        else{
            cout<<"Num="<<obj.num;
        }
    }
};
int main(){
  overload ov1,ov2;
  ov1.get_num();
  ov2.get_num();
  ov1>ov2;  // > operator   
}