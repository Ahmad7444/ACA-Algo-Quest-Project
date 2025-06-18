vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    set <vector<int>> s;
    int len=A.size();
    int n=(int)pow(2,len);
    for (int i=0;i<n;i++){
        vector <int> v;
        v.reserve(len);
        int bi=i,it=0;
        while(bi!=0){
            if (bi%2) v.push_back(A[it]);
            bi/=2; 
            it++;
        }
       
        s.insert(v);
    }
    vector<vector<int>> v(s.begin(),s.end());
    return v;
}
