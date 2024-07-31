//problem 121 2nd solution
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int minSoFar=prices[0];
    int ans=0;
    for(int i=1;i<prices.size();i++){
        int profit = prices[i]-minSoFar;
        if(profit>ans){
            ans=profit;
        }
        minSoFar=min(prices[i],minSoFar);
    }
    cout<<ans;
    }
