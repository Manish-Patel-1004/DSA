class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int m1= *max_element(nums.begin(),nums.end());
        int m2= *min_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=m2;i<=m1;i++)
            if(!mp.count(i))
                ans.push_back(i);
        return ans;
    }
};