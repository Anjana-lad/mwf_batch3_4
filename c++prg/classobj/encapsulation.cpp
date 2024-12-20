// encapsulation : wrapping up of data and function into a single entity.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    void set_data(int l,int w){
        length=l;
        width=w;
    }
    void display(){
        cout<<"Length="<<length<<"\n Width="<<width<<endl;
        cout<<"Area of retangle="<<length*width<<endl;
    }
};
int main(){
    Rectangle rect;
    rect.set_data(10,8);
    rect.display();
}