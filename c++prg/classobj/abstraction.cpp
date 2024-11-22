// abstraction := Process of hiding the implementation .
#include<iostream>
using namespace std;
class Result{
    int a,b,c;
    public:
    void add(){
        cout<<"Enter numbers:";
        cin>>a>>b;
        c=a+b;
        cout<<"total="<<c<<endl;
    }
};

int main(){
  Result res;
  res.add();  
}