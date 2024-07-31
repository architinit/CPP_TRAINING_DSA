//write a progam to find the  max element from the list
#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    int n;
    cout<<"Enter Length of List : ";
    cin>>n;
    cout<<"Enter elements in list : "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    int max=0;
    for(int i:l){
        if(i>max){
            max=i;
        }
    }
    cout<<"Maximum Element in List : "<<max;
}
