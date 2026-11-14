class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int b=INT_MAX;
        for(int i=l;i<=r;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=nums[j];
                if(j>=i)
                    sum-=nums[j-i];
                if(j>=i-1 && sum>0 && sum<b)
                    b=sum;
            }
        }
        if(b==INT_MAX)
            return -1;
        return b;
    }
};