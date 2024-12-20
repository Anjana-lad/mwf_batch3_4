// single inheritance : deriving one child class from only one base class is called single inheritance.
// syntax; class childclassname : access modifier base classname {
//}

#include<iostream>
using namespace std;
class Person{   // parent class
    protected:
    int pid;
    string name;
    protected:
    void get_data(){
        cout<<"Enter pid:";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void show(){
        cout<<"Pid="<<pid<<"\n Name="<<name<<endl;
    }
};
class Student :protected Person{   // child class.
    public:
   float percent,eng,maths,sci,comp;
   public:
   void get_details(){
    get_data();
    cout<<"Enter marks:";
    cin>>eng>>maths>>sci>>comp;
   }
   void display(){
    show();
    percent=(eng+maths+sci+comp)/4;
    cout<<"Percentage="<<percent<<endl;
   } 
};
int main(){
    Student st;
   // for(int i=0;i<3;i++){
        st.get_details();
        st.display();
    //}   
}

// task: WAP for single inheritance having base class "vehicle" and derived class "car" the base class has data member color,max_speed and derived class have no_of_doors;