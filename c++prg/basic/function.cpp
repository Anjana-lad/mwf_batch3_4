// function is a  block of code that takes some input and do computation on it and provide the output.
 /*4 category of function
 1. no argumnets no return
 2. no arguments with returns
 3. with arguments no returns;
 4. with arguments with returns.
*/
#include<iostream>
using namespace std;
int reverse(int num){
    int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"Reverse number="<<rev<<endl;
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Num="<<num<<endl;
    reverse(num); // function call;
}