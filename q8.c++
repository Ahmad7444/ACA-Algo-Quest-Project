// A=[1] B=1 case shows runtime error while submitting there but when i was using it in custom test, the answer was correct


int Solution::kthsmallest(const vector<int> &A, int B) {
    int n=A.size(), lrank=1,urank=0,lastnum=A[0];
    for (int i=0;i<n;i++){
        if (A[i]>lastnum && lrank>B) continue;
        else if (A[i]<lastnum && B>urank) continue;
        lrank =1;
        urank=0;
        
        for (int j=0;j<n;j++){
            if (A[j]==A[i]){
               
                urank++;
            }
            else if (A[j]<A[i]){
                lrank++;
                urank++;
            }
        }
        lastnum =A[i];
        if (lrank<=B && B<=urank) break;
       
    }
    return lastnum;
    
 }
