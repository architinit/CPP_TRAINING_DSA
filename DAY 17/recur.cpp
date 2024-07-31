#include<iostream>
using namespace std;
int rsum(int n)
{
    int d;
    int s;
    if(n!=0)
    {
        d=n%10;
        n=n/10;
        s=d+rsum(n);
    }
    else
        return 0;
    return s;
}

int main()
{
    int sum,num;
    cout<<"Enter a number";
    cin>>num;
    sum=rsum(num);
    cout<<sum;
}
