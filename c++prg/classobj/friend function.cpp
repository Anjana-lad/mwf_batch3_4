// friend function :
 #include<iostream>
 using namespace std;
 class Ajay;
 class Nitesh{
    private:
    int money_n=8000;
    friend int Sandeep(Nitesh,Ajay);
 };
 class Ajay{
    private:
    int money_a=9000;
    friend int Sandeep(Nitesh,Ajay);
 };

 int Sandeep(Nitesh n,Ajay a){
    int total=n.money_n+a.money_a;
    cout<<"Total money="<<total<<endl;
 }
 int main(){
    Nitesh nit;
    Ajay aj;
    Sandeep(nit,aj);
 }