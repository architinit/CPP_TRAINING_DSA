#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //open the text file for writing
    ofstream my_file("example.txt");
    if(!my_file)
    {
        cout<<"Error: Unavble to open the file...";
        return 1;
    }
    //Write multiple lines to the file
    my_file <<"Mohan 74"<<endl;
    my_file<<"Moye Moye 63"<<endl;
    my_file<<"Jitu Ji "<<endl;

    //close the file
    my_file.close();
    return 0;
}