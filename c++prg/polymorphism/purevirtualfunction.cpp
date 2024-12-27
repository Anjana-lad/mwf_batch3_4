// pure virtual function : function which is in base class without any body and assign to zero.
// and this function is inherited in the child class.then this function with virtual keyword is called pure virtual function and the class in which it is derived is called abstract class.

#include<iostream>
using namespace std;
class Shape{
    public:
     virtual int cal_area()=0;  // pure virtual function 
}; // abstract class
class Rectangle:public Shape{
    public:
    int len,wid;

    public:
    int get_data(){
        cout<<"Enter length and width:";
        cin>>len>>wid;
    }
    int cal_area(){
        cout<<"Area of rectangle="<<len*wid<<endl;
    }
};
class Circle:public Shape{
    public:
    float radius,pi=3.14;
    public:
    Circle(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int cal_area(){
        cout<<"Area of circle="<<pi*radius*radius<<endl;
    }
};
int main(){
    Rectangle rect;
    rect.get_data();
    rect.cal_area();

    Circle cr;
    cr.cal_area();
}