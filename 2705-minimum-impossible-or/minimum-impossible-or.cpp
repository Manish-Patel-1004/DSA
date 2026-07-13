class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int num=1;
        while(true){
            bool f=false;
            for(auto i:nums)
                if(i==num){
                    f=true;
                    break;
                }
            if(!f)
                return num;
            num*=2;
        }
    }
};