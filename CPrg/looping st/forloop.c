// for syntax:
// for ( initialization ; test condition ; increment )
//  {
//  Body of loop
//  }
//loop to print 1 to 10;

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d \n",i);
//     }
// }

// while
//syntax:
// while (condition )
//  {
//  Body of loop
//  }

// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=10){
//         printf("%d \n",i);
//         i++;
//     }
// }


//do..while()
//syntax:
// do
//  {
//  body of loop
//  } while (condition ); 

#include<stdio.h>
int main(){
    int i=10;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=0);
}

