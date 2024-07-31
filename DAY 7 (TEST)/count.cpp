#include<iostream>
using namespace std;
int cnt=0;
int divisibleBy3(int arr[],int s)
{
    for(int j=0;j<s;j++)
    {
        if(arr[j]<0)
        {
            cout<<"Invalid Input";
        }
        else
        {
         if(arr[j]%3==0)
        {
            cnt+=1;
        }
        }
    }
    return cnt;
}
int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    int n=divisibleBy3(arr,s);
    cout<<n;
}
