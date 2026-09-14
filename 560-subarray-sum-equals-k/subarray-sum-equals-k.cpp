class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//Brute Force
        // int result=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //    int sum=0;
        //    for(int j=i;j<n;j++)
        //    {
        //         // sum+=nums[j];
        //         // if(sum==k)
        //         //    result++;
        //         sum[i,j]=nums[j]-nums[i-1];
        //    }
        // }
        
        
        
//Unordered Map(Optimal Approach)
        unordered_map<int,int> um;
        int sum = 0,count = 0;
        um[0] = 1;
        for(int i : nums) {
            sum += i;
            int r = sum - k;
            if(um.count(r)) count += um[r];
            um[sum]++;
        } 
        return count;
    }
};