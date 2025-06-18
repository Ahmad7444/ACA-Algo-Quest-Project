int Solution::pow(int x, int n, int d) {
    
    long long ans=1;
    long long r=x%d;
    if (!r) return 0;
   
    while(n!=0){
        if (n%2) {ans*=r;  ans%=d;}
        r*=r;
        r%=d;
        n/=2;
    }
    ans=(ans>=0)?(ans):(d+ans);
    return ans;
}
