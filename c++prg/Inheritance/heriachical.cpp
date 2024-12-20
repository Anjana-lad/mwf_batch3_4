//Hierarchical Inheritance: 
#include<iostream>
using namespace std;
class Fruits{
    protected :
    string color;
    public:
    void get_color(){
        cout<<"Enter color:";
        cin>>color;
    }
};
class Banana :public Fruits{
public:
    void show(){
        get_color();
        cout<<"I am in banana class"<<endl;
    }
};
class Apple : public Fruits{
    public:
    void display(){
        get_color();
        cout<<"I am in Apple class."<<endl;
    }
};
int main(){
    Banana b;
    Apple a;
    b.show();
    a.display();
}