#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int nooftest;
    cin >> nooftest;
    while (nooftest--)
    {
        int n;
        cin >> n;
        set <pair<int,int> > s;
        int y;
        for (int i=0;i<n;i++){
            cin >> y;
            s.insert({y,i});
        }
        int i=0,flag=0;
        for (set<pair <int ,int>>::iterator it=s.begin();it!=s.end();it++){
            if ((it->second-i)%2 ==0) {i++; continue;}
            else{
                auto temp=it;
                it++;
                i++;
                if (i!=n && it->first == temp->first) {
                    i++;
                    continue;
                }
                else {
                    cout << "NO" << endl;
                    flag=1;
                    break;
                }
            }
        }
        if (flag) break;
        else cout << "YES" << endl;
    }
    

    

}