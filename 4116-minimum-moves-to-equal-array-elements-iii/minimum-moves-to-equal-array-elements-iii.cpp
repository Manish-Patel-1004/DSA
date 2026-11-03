class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        long long res=0;
        for(int i:nums)
            res+=(mx-i);
        return res;
    }
};