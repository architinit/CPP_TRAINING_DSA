#include<iostream>
#include<fstream>
using namespace std;
int main() {
    //open file for reADING
    ifstream my_file("example.txt");
    //CHECK FILE FOR ERRORS
    if(!my_file) {
        cout<<"Error : Unable to open the file."<<endl;
        return 1;
    }
    //store the content of the line in "line" string.
    string line;
    while(!my_file.eof()) {//loop until end of text file
        //store the current line of the file
        //in the "line" variable.
        getline(my_file,line);
        //print the line variables
        cout<<line<<endl;
    }
    my_file.close();
    return 0;
}