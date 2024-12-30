// template : 
// 1. function template
// #include<iostream>
// using namespace std;

// template <typename T>
// T myadd_fun(T a, T b){
//     return a+b;
// }

// int main(){
//     cout<<"calling function::"<<myadd_fun<int>(10,20)<<endl;
//     cout<<"Float value::"<<myadd_fun<double>(10.3,42.9)<<endl;
//     cout<<"String:: "<<myadd_fun<string>("Hello ","world")<<endl;
// }


//2. class template

#include<iostream>
using namespace std;
template <class T>
class number{
    private:
    T num;
    public:
    number(T n){
        num=n;
    }
    void show(){
        cout<<"Number="<<num<<endl;
    }
};
int main(){
    number <int> n1(10);
    n1.show();
    number <double>n2(50.36);
    n2.show();
    number <string> n3("Hello");
    n3.show();
    
}