// default constructor : in this constructor we can't pass any parameter.
#include<iostream>
using namespace std;
class Points{
    int singing, dance;
    public:
    Points(){  // default constructor
        singing=10;
        dance=50;
    }
    void display(){
        cout<<"Singing="<<singing<<"\ndance="<<dance<<endl;
    }
};
int main(){
  Points p;
  p.display();  
}