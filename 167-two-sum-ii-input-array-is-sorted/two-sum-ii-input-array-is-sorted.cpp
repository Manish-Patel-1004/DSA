class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        int left=0,right=n-1;
        while(left<right){
            int s=nums[left]+nums[right];
            if(s==t)
                return {left+1,right+1};
            else if(s>t)
                right--;
            else
                left++;
        }
        return {};
    }
};