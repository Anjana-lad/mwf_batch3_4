// loops
// 3 types of loop 
// for loop
// while loop 
// do while loop

// factorial
#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"Enter number:";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"Factorial of given number="<<fact<<endl;
}