class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        bool length=false;
        for(int i:nums)
            t^=i;
        if(n%2==0)
            length=true;
        if(!length && t!=0)
            return false;
        return true;
    }
};