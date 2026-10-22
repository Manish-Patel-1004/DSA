class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int a=1,d=1;
        for(int i=1;i<n;i++){
            a+=nums[i]==(nums[i-1]+1)%n;
            d+=nums[i-1]==(nums[i]+1)%n;
        }
        if(a==n)
            return nums.front()?min(n-nums.front(),nums.front()+2):0;
        if(d==n)
            return min(n-nums.back(),nums.back())+1;
        return -1;
    }
};