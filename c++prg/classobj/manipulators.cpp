// maniplutors in c++ like setw,setfill,setprecision
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int len,wid;
    cout<<"Enter length and width:";
    cin>>len>>wid;
    // cout<<"length="<<setw(7)<<len<<endl;
    // cout<<"Width ="<<setw(7)<<wid<<endl;
    float pi=74.36589412;
    cout<<"set precision="<<setprecision(5)<<pi<<endl;
    cout<<fixed;
    cout<<"set precision="<<setprecision(5)<<pi<<endl;

      cout<<"length;"<<setfill('x')<<setw(7)<<len<<endl;

}