class Solution {
public:

    //Solution 1
    // long long countCommas(long long n){
    //     long long c=0;
    //     for(long long i=1;i<=n;i++)
    //         if(i>=1000)
    //             c++;
    //     return c;
    // }

    //Solution 2
    // long long countCommas(long long n) {
    //     long long ans=0;
    //     long long base=1000;
    //     long long c=1;
    //     while(base<=n){
    //         long long e=base*1000+1;
    //         long long count=min(n,e)-base+1;
    //         ans+=count*c;
    //         base*=1000;
    //         c++;
    //     }
    //     return ans;
    // }

    //Solution 3
    long long countCommas(long long n){
        if(n<1000)
            return 0;
        long num=0;
        if(n>=1000)
            num=num+n-1000+1;
        if(n>=1000000)
            num=num+n-1000000+1;
        if(n>=1000000000L)
            num=num+n-1000000000L+1;
        if(n>=1000000000000L)
            num=num+n-1000000000000L+1;
        if(n>=1000000000000000L)
            num=num+n-1000000000000000L+1;
        return num;
    }
};