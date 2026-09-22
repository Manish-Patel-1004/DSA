class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)
            return s;
        vector<string>v(numRows,"");
        int a=0,d=-1;
        for(int i=0;i<s.length();i++){
            if(a==numRows-1 || a==0)
                d*=(-1);
            v[a]+=s[i];
            if(d==1)
                a++;
            else
                a--;
        }
        string ans;
        for(auto &i:v)
            ans+=i;
        return ans;
    }
};