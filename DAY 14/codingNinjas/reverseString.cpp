#include <bits/stdc++.h>
string reverseString(string str)
{
	// Write your code here.
	string s="";
	for(int i=str.length();i>=0;i--){
		s+=str[i];
	}
	return s;
}
