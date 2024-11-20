// defineing member function outside the class.
// returntype classname :: memberfunction name{// body}

#include<iostream>
using namespace std;
class Employee{
   public:
    int Eid;
    float salary;
    string name;
   public:
    void input();
    void display();
};
void Employee :: input(){
    cout<<"Enter id:";
    cin>>Eid;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter salary:";
    cin>>salary;
}

void Employee ::display(){
    cout<<"Id="<<Eid<<"\nName= "<<name<<"\nSalary="<<salary<<endl;
}

int main(){
    Employee emp;
    emp.input();
    emp.display();   
}