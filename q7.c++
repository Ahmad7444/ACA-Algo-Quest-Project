int Solution::findCount(const vector<int> &A, int B) {
    int l=0,r=A.size()-1;
    while(B!=A[(l+r)/2] && l<=r){
        if (B>A[(l+r)/2]) l=(l+r)/2 +1;
        else r=(l+r)/2 -1;
        
    }
    if (l>r) return 0;
    int m1=(l+r)/2;
    int m2=m1;
    while(m1!=l){
        if (B==A[(l+m1)/2]){
            m1=(l+m1)/2;
            
        }
        else l=(l+m1)/2 +1;
    }
    while(r!=m2){
        if (B==A[(r+m2)/2 +1]){
            m2=(r+m2)/2 +1;
            
        }
        else r=(r+m2)/2 ;
    }
    return r-l+1;
    
}
