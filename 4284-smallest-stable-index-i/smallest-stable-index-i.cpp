class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int max=nums[i];
            for(int j=0;j<=i;j++)
                if(nums[j]>max)
                    max=nums[j];
            int min=nums[i];
            for(int l=i;l<n;l++)
                if(nums[l]<min)
                    min=nums[l];
            int s=max-min;
            if(s<=k)
                return i;
        }
        return -1;
    }
};