// aggregation :This is process in which one class has a entity reference of another class.it has HAS-A relationship with other class.

#include<iostream>
using namespace std;
class Address{
    public:
    string city,state;
    public:
    Address(string ct,string st){
        this->city=ct;
        this->state=st;
    }
};
class Employee {
    private:
    Address *add;  // HAS-A relationship
    public:
    int id;
    string name;

    public:
    Employee(int eid,string nm,Address *add){
        this->id=eid;
        this->name=nm;
        this->add=add;
}
    int show(){
        cout<<"Id="<<id<<endl<<"Name="<<name<<endl<<"city="<<add->city<<endl<<"State="<<add->state<<endl;
    }

};
int main(){
  Address ad("Surat","Gujarat");
  Employee emp(101,"Anju",&ad);  
    emp.show();
}