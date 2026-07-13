class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>rank;
        int r=1;
        for(int it:temp)
            if(!rank.count(it))
                rank[it]=r++;
        for(int &it:arr)
            it=rank[it];
        return arr;
    }
};