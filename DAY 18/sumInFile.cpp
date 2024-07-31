//reading from file
#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int sum = 0, avg=0;
    //open a text file for reading
    ifstream my_file("example.txt");
    //check the file for errors
    if(!my_file){
        cout<<"Error: Unable to open file."<<endl;
        return 1;
    }
    //store the contents of the file in  "line " string
    string line;
    //loop until the end of the text file
    while(!my_file.eof()){
        //store the current line of the file in the "line" variable
        getline(my_file,line);
        v.push_back(line);
        //print the line variable
       cout<<line<<endl;
    }

    for(int i=0;i<v.size()-1;i++){
        int a=v[i][v[i].size()-1]-48;
        int b=v[i][v[i].size()-2]-48;
        int ans=b*10+a;
        sum+=ans;
    }
    cout<<"Sum :"<<sum<<endl;
    avg=sum/5;
    cout<<"Average :"<<avg<<endl;
//close the file
my_file.close();
return 0;
}