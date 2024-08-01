//problem 121 solution on leetcode
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int min=prices[0];
    int sum=0;
    for(int i=1;i<prices.size();i++){
        if(sum<(prices[i]-min)){
            sum=prices[i]-min;
        }
        if(prices[i]<min){
            min=prices[i];
        }
    }
    cout<<sum;
}
