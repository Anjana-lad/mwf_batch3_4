// parameterized constructor :- in this we have to pass the argument /parameter in the constructor.
#include<iostream>
using namespace std;
class Circle{
    float area,radius;
    public:
    Circle(float r){  // parameterized constructor
        radius=r;    // initialization
    }
    void Area(){
        area=3.14*radius*radius;
        cout<<"Area of circle="<<area<<endl;
    }
};
int main(){
    Circle cr(4);
    cr.Area();
    int a;
    cout<<"Enter a:";
    cin>>a;
    Circle cr1(a);
    cr1.Area();   
}