// multilevel inheritance
#include<iostream>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    public:
    int get_data(){
        cout<<"Enter eid:";
        cin>>eid;
        cout<<"Enter name:";
        cin>>name;
    }
};
class task:public employee{
    public:
    int t1,t2;
    public:
    void gettask(){
        get_data();
        cout<<"Enter tasks";
        cin>>t1>>t2;
    }
};
class Appraisal:public task{
    public:
    int total;
    public:
    void data(){
        gettask();
        total=t1+t2;
        cout<<"Total task="<<total<<endl;
    }
};
int main(){
    Appraisal app;
    app.data();
}