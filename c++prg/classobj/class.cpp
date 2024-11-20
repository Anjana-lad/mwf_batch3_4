// class and object
#include<iostream>
using namespace std;
class Person{
    public:  // access modifier/specifier.
    int pid;
    string name;   // data member;
  public:
    void get_data(){
        cout<<"Enter pid=";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin,name);
    }
    void display(){
        cout<<"Pid="<<pid<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main(){
  Person p1;
  p1.get_data();
  p1.display();  
}