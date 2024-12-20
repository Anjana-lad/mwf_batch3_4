// multiple inheritance.
#include<iostream>
using namespace std;
class Mom{
protected:
int m_money;
public:
void m_data(){
    cout<<"Enter mom's money:";
    cin>>m_money;
}
};
class Dad{
    protected:
    int d_money;
    public:
    void d_data(){
        cout<<"Enter dad's money:";
        cin>>d_money;
    }
};
class child:protected Mom,Dad{
    public:
    int total;
    public:
    int total_money(){
        m_data();
        d_data();
        total=m_money+d_money;
        cout<<"Total money="<<total<<endl;
    }
};
int main(){
    child ch;
    ch.total_money();
}