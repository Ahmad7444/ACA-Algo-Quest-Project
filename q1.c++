
#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int i=0,j=0;
    long long sum=0;
    int ans=0;
    while(j!=a.size()){
        
        sum+=a[j];
        j++;
        if (sum == k){
            ans=(ans>j-i)?(ans):(j-i);
            sum-=a[i];
            i++;
        }
        else if(sum > k){
            
            while(sum>k){
                sum-=a[i];
                i++;
            }

        }

    }
    return ans;

}

int main() {
    int n;
    cin >> n;
    long long k;
    cin >> k;
   
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << longestSubarrayWithSumK(a,k);
}