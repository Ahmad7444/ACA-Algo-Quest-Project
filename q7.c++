vector<int> Solution::nextGreater(vector<int> &A) {
    int n=A.size();
    vector<int> v(n);
    for (int i=0;i<n;i++){
        int m=A[i];
        bool flag=true;
        for (int j=i+1;j<n;j++){
            //m=(m>A[j])?(m):(A[j]); 
            if (m<A[j] ){
                m=A[j];
                flag=false;
                break;
            }
            // if (!flag && A[j]>A[i] && A[j]<m){
            //     m=A[j];
            // }
        }
        if (!flag){
            v[i]=(m);
        }
        else v[i]=(-1);
    }
    return v;
}
