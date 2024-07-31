#include<iostream>
#include<fstream>
using namespace std;
int main() {
    //opening a text file for writing you can use open() to open file
    //ofstream my_file.open("example.txt")

    ofstream my_file("example.txt");

    //close the file
    //my_file.close();

    // if(!my_file){
    //     cout<<"Error opening the file." <<endl;
    // }
    // return 1;   //Use return 1 if there are some errors. So to terminate code we use return 1.

    // if(!my_file.is_open()){
    //     cout<<"Error opening the file." <<endl;
    //     return 1;
    // }

    if(my_file.fail()){                             //true- if the file failed to open or if it is in a state of error.
        cout<<"Error opening the file."<<endl;      
        return 1;
    }

}