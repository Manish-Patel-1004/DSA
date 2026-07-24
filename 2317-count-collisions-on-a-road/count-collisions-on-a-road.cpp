class Solution {
public:
    int countCollisions(string d) {
        int n=d.size();
        int l=0;
        while(l<n&d[l]=='L')
            l++;
        int r=n-1;
        while(r>=0&&d[r]=='R')
            r--;
        int c=0;
        for(int i=l;i<=r;i++)
            if(d[i]!='S')
                c++;
        return c;
    }
};