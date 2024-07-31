#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //open the text file for Appending
    ofstream my_file("example.txt",ios::app);
    if(!my_file)
    {
        cout<<"Error: Unavble to open the file...";
        return 1;
    }
    //Append multiple lines to the file
    my_file <<"Aarush 88"<<endl;
    my_file<<"Hoye Hoye 89"<<endl;
    my_file<<"HRX Ji 96"<<endl;
    

    //close the file
    my_file.close();
    return 0;
}