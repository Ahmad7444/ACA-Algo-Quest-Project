int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    int i=0;
    while(i!=A.size()){
        if (A[i]!="/" && A[i]!="*" && A[i]!="+" && A[i]!="-"){
            int n=0;
            int j=0;
            if (A[i][0]=='-') j=1;
            while(j!=A[i].length()){
                n=10*n+A[i][j]-'0';
                j++;
            }
            if (A[i][0]=='-') n=-n;
            s.push(n);
        }
        else {
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            switch (A[i][0]) {
                case '+':{
                    
                    s.push(a+b);
                    break;
                }
                case '-':{
                    
                    s.push(b-a);
                    break;
                    
                }
                case '*':{
                    
                    s.push(a*b);
                    break;
                }
                case '/':{
                    
                    s.push(b/a);
                    break;
                }
            }
        }
        i++;
        
    }
    return s.top();
}
