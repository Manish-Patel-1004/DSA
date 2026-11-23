class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 1;
        int c=0;
        for(int i=0;i<n;i++){
            int s=0,neig=0;
            if(i>0){
                s+=nums[i-1];
                neig++;
            }
            if(i<n-1){
                s+=nums[i+1];
                neig++;
            }
            if(nums[i]*neig>=s)
                c++;
        }
        return c;
    }
};