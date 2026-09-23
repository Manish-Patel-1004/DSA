class Solution1 {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        bool all=false;
        int i=0;
        dfs(s,dict,i,all);
        return (all>0);
    }
private:
    void dfs(string& s, unordered_set<string>& dict,int i,bool& all){
        if(i==s.size()) all=true;
        else{
            for(int j=i;j<s.size();j++){
                string word=s.substr(i,j-i+1);
                if(dict.find(word)!=dict.end()){
                    dfs(s,dict,j+1,all);
                }
            }
        }
    }
};

//Naive implementtion of Head Recurrence
class Solution2 {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        int i=0;
        return f1(s,dict,i) > 0;
    }
private:
    int f1(string& s, unordered_set<string>& dict,int i){
        if(i==s.size()) return 1;
        else{
            int count=0;
            for(int j=i;j<s.size();j++){
                string word=s.substr(i,j-i+1);
                if(dict.find(word)!=dict.end()){
                    count+=f1(s,dict,j+1);
                }
            }
            return count;
        }
    }
};

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        int i=0;
        int n=s.length();
        vector<int>F1(n+1,-1);
        return f1(s,dict,i,F1) > 0;
    }
private:
    int f1(string& s, unordered_set<string>& dict,int i,vector<int>&F1){
        if(F1[i] !=-1)
            return F1[i];
        if(i==s.size()) return F1[i]=1;
        else{
            int count=0;
            for(int j=i;j<s.size();j++){
                string word=s.substr(i,j-i+1);
                if(dict.find(word)!=dict.end()){
                    count+=f1(s,dict,j+1,F1);
                }
            }
            return F1[i]=count;
        }
    }
};