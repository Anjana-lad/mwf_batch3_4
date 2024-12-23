// diamond problem : combination of multilevel and multiple inheritance;
#include<iostream>
using namespace std;
class P{
    public:
    int p;
    public:
    void get_p(){
        cout<<"Enter p:";
        cin>>p;
    }
};
class Q:virtual public P{
    public:
    int q;
    public:
    void get_q(){
        cout<<"Enter q:";
        cin>>q;
    }

};
class R: virtual public P{
    public:
    int r;
    public:
    void get_r(){
        cout<<"Enter r:";
        cin>>r;
    }
};
class S :public Q,R{
    public:
    int s,total;
    public:
    void get_s(){
        get_p();
        get_q();
        get_r();
        cout<<"Enter s:";
        cin>>s;
    }
    void show(){
        total=p+q+r+s;
        cout<<"Total="<<total<<endl;
    }
};
int main(){
    S ss;
    ss.get_s();
    ss.show();
}