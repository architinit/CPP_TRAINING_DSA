class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=INT_MIN;
        long int ans=0;
        for(int i=0;i<piles.size();i++){
            if(max<piles[i]){
                max=piles[i];
            }
        }
        for(float i=1.0;i<=max;i++){
            float value=0.0;
            long int ans=0;
            for(int j=0;j<piles.size();j++){
                value=piles[j]/i;
                ans+=ceil(value);
            }
            if(ans<=h){
                ans=i;
                return i;
                break;
            }
        }
    return ans;
    }
};
#include <vector>
#include <algorithm>
class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int start = 1;
        int end = piles[0];
        for (int i = 1; i < piles.size(); i++) {
            end = std::max(end, piles[i]);
        }
        int ans = -1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (isPossible(piles, h, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
    bool isPossible(std::vector<int>& piles, int h, int speed) {
        int hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; // Equivalent to ceil(pile / speed)
        }
        return hours <= h;
    }
};
