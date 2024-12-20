// if else program
#include<iostream>
using namespace std;
int main(){
    float english,maths,science,computer;
    float total,percent;
    cout<<"Enter students marks:\n";
    cout<<"English=";
    cin>>english;
    cout<<"Maths=";
    cin>>maths;
    cout<<"Science=";
    cin>>science;
    cout<<"Computer=";
    cin>>computer;
    total=english+maths+science+computer;
    percent= (total*100)/400;
    cout<<"Total ="<<total <<"\n Percentage="<<percent<<endl;


    if(percent > 80 && percent <= 100){
        cout<<"Excellent"<<endl;
    }
    else if(percent > 50 && percent <=80){
        cout<<"Good"<<endl;

    }
    else if(percent >35 && percent <=50){
        cout<<"Average"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}