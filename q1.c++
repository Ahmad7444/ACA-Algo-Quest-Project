
#include <iostream>
#include <vector>
using namespace std;

int main() {
   
  
    int n;
    long long tofind,sum=0,count=0;
    cin >> n;
    cin >> tofind;
    vector <long long> v(n);
    
    for (int i=0;i<n;i++){
        cin >> v[i];
        
    }
    for (int i=0,j=0;i<n && j<n;){
       
        sum +=v[j];
        if (sum==tofind) {
            count++;
            sum-=v[i];
            i++;
            
        }
        else if (sum>tofind){
            sum-=v[i];
            i++;
            (sum==0)?(j):(j--);
        }
        else j++;
        
     
    }
    cout << count;
    

    return 0;
}