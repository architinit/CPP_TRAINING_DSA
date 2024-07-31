#include<iostream>
#include<array>
using namespace std;;
int main() {
    array<int,4> a={3,4,2,7};
    int size=a.size();
    cout<<size<<endl;

    for(int i=0;i<size;i++)
    cout<<a[i]<<endl;

}
