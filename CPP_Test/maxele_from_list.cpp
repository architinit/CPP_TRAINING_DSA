//write a progam to find the  max element from the list
#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    cout<<"Enter the size of the list"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements in list : "<<endl;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        l.push_back(ele);
    }
    int max=0;
    for(int i:l){
        if(i>max){
            max=i;
        }
    }
    cout<<"Maximum Element present in the List : "<<max;

}
