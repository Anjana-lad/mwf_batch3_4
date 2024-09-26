//function : function is a block of code that execute the task according to the given input and produces its output.
// 2 types function := 1. in-built function. 2. user defined function.

// function program

#include<stdio.h>
void print();  // function declaration 

int main(){
    printf("Call function.");
    print();  // calling function
    print();
}

void print(){  //function definition 
    printf("\n Hello from tops tech.");
}