class Solution {
public:
    int gcd(int x,int y)
    {
        if(y==0) return x;
        return gcd(y,x%y);
    }
    int gcdOfOddEvenSums(int n) {
        int s=n*n;
        int sum=s+n;
        return gcd(sum,s);
    }
};