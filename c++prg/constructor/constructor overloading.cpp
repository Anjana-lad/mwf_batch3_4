// constructor overloading:
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,width;
    public:
    Rectangle();  // default
    Rectangle(int,int);  // parameterized 
    int area(){  // mf
        return length*width;
    }
    ~Rectangle(){  //Destructor preceded by tiled sign(~).
        cout<<"Destructor called"<<endl;
    }
};
Rectangle :: Rectangle(){
    cout<<"Enter length and width:";
    cin>>length>>width;
}

Rectangle :: Rectangle(int l, int w){
    length=l;
    width=w;
}

int main(){
    Rectangle rect(5,8);
    cout<<"Area of rectangle="<<rect.area()<<endl;
    Rectangle rect1(3,6);
    cout<<"Area of rectangle="<<rect1.area()<<endl;

}