class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int ans=0;
        if(n1%2!=0)
            for(auto i:nums2)
                ans^=i;
        if(n2%2!=0)
            for(auto i:nums1)
                ans^=i;
        return ans;
    }
};