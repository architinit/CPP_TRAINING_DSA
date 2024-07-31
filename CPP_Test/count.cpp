//count of 3 multiples
#include<iostream>
using namespace std;
int count=0;
int divisibleBy3(int arr[],int size)
{
    for(int j=0;j<size;j++)
    {
        if(arr[j]<0)
        {
            cout<<"Invalid Input";
        }
        else
        {
         if(arr[j]%3==0)
        {
            count+=1;
        }
        }
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter element"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements divisible by 3 are"<<endl;
    int n=divisibleBy3(arr,size);
    cout<<n;
}
