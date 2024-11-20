// encapsulation : wrapping up of data and function into a single entity.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    int set_data(int len,int wid){
        length=len;
        width=wid;
    }
    int get_data(){
        cout<<"Length="<<length<<"\nWidth="<<width<<endl;
        cout<<"Area="<<2*length*width<<endl;
    }
};
int main(){
  Rectangle rect;
  rect.set_data(5,8);
  rect.get_data();  
}