class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>set;
        while(set.find(n)==set.end()){
            set.insert(n);
            n=fun(n);
            if(n==1)
                return true;
        }
        return false;
    }
private:
    int fun(int n){
        int ans=0;
        while(n>0)
        {
            int d=n%10;
            ans+=d*d;
            n=n/10;
        }
        return ans;
    }
};