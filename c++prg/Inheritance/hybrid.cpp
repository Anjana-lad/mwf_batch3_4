// hybrid inheritance: in this we have combination of more then one type of inheritance.
#include<iostream>
using namespace std;
class Vehicle{
    public:
    int type;
    string company;
    public:
    Vehicle(){
        cout<<"Enter type of vehicle:";
        cin>> type;
        cout<<"Enter company for vehicle:";
        cin.ignore();
        getline(cin,company);
    }
    void show_data(){
        cout<<"Type:"<<type<<"\n Company:"<<company<<endl;
    }
};
class two_wheels:public Vehicle{
    public:
        int gear;
    public:
        two_wheels(){
        cout<<"Enter gear for 2_wheels:";
        cin>>gear;
    }
    void set_data(){
        show_data();
        cout<<"Gear="<<gear<<endl;
    }
};
class bike:public two_wheels{
    public:
    string fuel;
    public:
    bike(){
        set_data();
        cout<<"Enter type of fuel:";
        cin.ignore();
        getline(cin,fuel);

    }
    void display(){
        cout<<"type of fuel:"<<fuel<<endl;
    }
};
class cycle:public two_wheels{
    public:
    string cycle_type;
    public:
    cycle(){
    set_data();
    cout<<"Enter type of  cycle:";
    cin>>cycle_type;
    }
    void show(){
        cout<<"Type of cycle="<<cycle_type<<endl;
    }
};
int main(){
    bike b;
    cycle c;
    c.show();
    b.display();
}