class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>set;
        vector<vector<int>>res;
        for(int i=0;i<n-3;i++)
            for(int j=i+1;j<n-2;j++){
                long long nt=(long long)target-(long long)nums[i]-(long long)nums[j];
                int l=j+1,h=n-1;
                while(l<h){
                    if(nums[l]+nums[h]<nt)
                        l++;
                    else if(nums[l]+nums[h]>nt)
                        h--;
                    else{
                        set.insert({nums[i],nums[j],nums[l],nums[h]});
                        l++,h--;
                    }
                }
            }
        for(auto x:set)
            res.push_back(x);
        return res;
    }
};