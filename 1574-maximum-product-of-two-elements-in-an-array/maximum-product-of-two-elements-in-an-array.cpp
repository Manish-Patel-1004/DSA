class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int d1=0,d2=0;
        for(int i:nums){
            if(d1<=i){
                d2=d1;
                d1=i;
            }
            else if(d2<i)
                d2=i;
        }
        return (d1-1)*(d2-1);
    }
};