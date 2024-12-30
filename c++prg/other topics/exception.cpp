// enter age to check weather person is able to vote or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter age:";
//     cin>>age;
//     try{
//     if(age>=18){
//         cout<<"Able to vote.";
//     }
//     else{
//         throw(age);
//     }
//     }
//     catch(int a){
//         cout<<"Age is not appropriate"<<a;
//     }
// }

// number divide by zero not possible
#include<iostream>
using namespace std;
int main(){
    int a,b,c,res;
    cout<<"Enter number:";
    cin>>a>>b>>c;
    try{
        if(b-c!=0){
            res=a/(b-c);
            cout<<"Result="<<res<<endl;
            }
        
        else{
            throw(b-c);
        }
    }
    catch(int r){
        cout<<"Number not divide by "<<r<<endl;
    }
}