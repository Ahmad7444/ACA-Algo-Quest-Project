void funct(string mainstr, string  s, unordered_map<int,string>& m, vector<string> &v){

    if (mainstr=="" ) {v.push_back(s); return;}
    int z=mainstr[0]-'0';
    mainstr=mainstr.substr(1);
    for (char c : m[z])
    {
            funct(mainstr,s+c,m,v);
            
    }
}


vector<string> Solution::letterCombinations(string A) {
    
   unordered_map<int,string> m;
    m[0]="0";
    m[1]="1";
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    vector<string> v;
    string s="";
    funct(A,s,m,v);
    return v;
}