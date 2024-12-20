// arithmetic ,logical,assignment,relational,conditional,others
#include<iostream>
//#define pi 3.14
using namespace std;
int main(){
    float radius;
    float area;
    const float PI=3.14;
    cout<<"Enter radius:";
    cin>>radius;
    area=PI * (int)radius * (int)radius;
    cout<<"Area of circle="<<area<<endl;
}