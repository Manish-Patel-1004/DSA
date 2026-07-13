class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0;
        for(int i:nums)
            maxi=max(maxi,i);
        int ms=0;
        int c=0;
        for(int i:nums){
            if(i==maxi)
                c++;
            else
                c=0;
            ms=max(ms,c);
        }
        return ms;
    }
};