//display the elements of the array
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
    cout<<"Elements of Array are : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
