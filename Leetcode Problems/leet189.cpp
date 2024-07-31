class Solution{
public void rotate(int[] nums, int k}{
    int n = nums.length;
    k=k%n;
     reverse(nums,0,n-1};
      reverse(nums,0,k-1);
       reverse(nums,k,n-1);
       void reverse(int nums[],int start,int end){
       int i = start,j=end;
       while(i<j){
        int temp=nums[i];
        nums[i]nums[j];
        nums[j]=temp;
        i++;j--;
       }
       }"
       }
       //-----------------------------------------
       class Solution {
public:
    void reverse(vector<int>& v,int start,int end){
        int temp;
        while(start<end){
            temp=v[start];
            v[start]=v[end];
            v[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()){
            k=k%nums.size();
        }
        reverse(nums,0,nums.size()-1);
        reverse(nums,k,nums.size()-1);
        reverse(nums,0,k-1);
    }
};
