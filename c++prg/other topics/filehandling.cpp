// //file handling to write data to the file.
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     int id;
//     string name;
//     ofstream fout;
//     cout<<"Enter id and name:";
//     cin>>id;
//     cin.ignore();
//     getline(cin, name);

//     fout.open("G:\\mwf_batch3_4(sandeep)\\c++prg\\other topics\\file.txt");
//     fout<<id<<endl<<name;
    // fout.close();
//     cout<<"Data Inserted in file";

// }

// read data from file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str;
    ifstream fin;
    fin.open("G:\\mwf_batch3_4(sandeep)\\c++prg\\theory\\class.txt");

  //  cout<<"Data from file:"<<endl;
    while(!fin.eof()){
       getline(fin, str);
       cout<<str<<endl;
       
     }
     //cout<<str;
    fin.close();
}
