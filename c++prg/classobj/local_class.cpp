// local class : class defined inside the main function.
#include<iostream>
using namespace std;
int main(){
    class student{  // class 
        private:
        int rollno;
        string name;
        public:
        void input(){
            cout<<"Enter Rollno:";
            cin>>rollno;
            cout<<"Enter name:";
            cin>>name;
        }
        void display(){
            cout<<"Rollno="<<rollno<<"\n Name="<<name<<endl;
        }
    };
    student st;  // object
    st.input();
    st.display();
}