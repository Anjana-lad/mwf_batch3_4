//function overloading.: function name are same but parameter are different,different type of parameter.
#include<iostream>
using namespace std;
int add_fun(int a,int b){
    return a+b;
}
int add_fun(int a,int b ,int c){
    return a+b+c;
}
int add_fun(double a,double b){
cout<<"total="<<a+b;
}
int main(){
    cout<<"With integer parameters:"<<add_fun(10,20)<<endl;
    cout<<"Total="<<add_fun(10,20,30)<<endl;
    add_fun(10.4,52.3); 
}