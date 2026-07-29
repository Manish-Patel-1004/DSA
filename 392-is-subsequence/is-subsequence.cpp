class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans=0;
        int n1=s.size();
        int n2=t.size();
        int j=0;
        if(s=="")   return true;
        if(n1>n2) return false;
        for(int i=0;i<n2;i++)
        {
            if(t[i]==s[j])
            {
                ans++;
                j++;
            }
            if(ans==n1) return true;
        }
        return false;
    }
};