#include<bits/stdc++.h>
using namespace std;

string generateOTP(int len)
{
    string str = "abcdefghijklmnopABCDEFGHIJKLMNOP123456789";

    int n = str.length();
    string OTP;

    for(int i=0;i<len;i++)
    {
        OTP.push_back(str[rand() % n]);
    }
    return OTP;

}
int main()
{
    srand(time(NULL));
    int len = 6;
    cout<<"My OTP is: "<<generateOTP(len).c_str();

    return 0;

}
