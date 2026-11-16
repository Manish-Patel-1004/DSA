class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k)
        {
            int n=s.size();
            string res="";
            for(int i=0;i<n;i+=k){
                string t1=s.substr(i,k);
                int t2=0;
                for(char ch:t1)
                    t2+=ch-'0';
                res+=to_string(t2);
            }
            s=res;
        }
        return s;
    }
};