#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map <int,int> m;
    int y;
    for (int i=0;i<n;i++){
        cin >> y;
        m[y]++;
    }
    int res=0;
    for (map <int ,int>::iterator it=m.begin();it!=m.end();it++){
        res=(it->second>res)?(it->second):(res);
    }

    cout << (res);

}