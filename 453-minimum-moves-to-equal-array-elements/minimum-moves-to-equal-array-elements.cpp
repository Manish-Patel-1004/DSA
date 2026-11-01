class Solution {
public:
    int minMoves(vector<int>& nums) {
        int l=ranges::min(nums),m=0;
        for(int x:nums)
            m+=x-l;
        return m;
    }
};