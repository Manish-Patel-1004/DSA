class Solution1 {
public:
    int numDecodings(string s) {
        return f1(s,0);
    }
private:
    int f1(const string s,int i){
        if(i==s.size())
            return 1;
        if(s[i]=='0')
            return 0;
        int c=f1(s,i+1);
        if(i+1<s.size() && 10*(s[i]-'0')+(s[i+1]-'0')<=26)
            c+=f1(s,i+2);
        return c;
    }
};

class Solution {
public:
    int numDecodings(string s) {
        vector<int>F1(s.size()+1,-1);
        return f1(s,0,F1);
    }
private:
    int f1(const string s,int i,vector<int>& F1){
        if(F1[i]!=-1)
            return F1[i];
        if(i==s.size())
            return 1;
        if(s[i]=='0')
            return 0;
        int c=f1(s,i+1,F1);
        if(i+1<s.size() && 10*(s[i]-'0')+(s[i+1]-'0')<=26)
            c+=f1(s,i+2,F1);
        return F1[i]=c;
    }
};