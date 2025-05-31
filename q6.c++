//this code also stores the resultant parerethises so, the time compplexity is a bit more;; 


#include <iostream>
#include <vector>
#include <set>
using namespace std;

int longestValidParentheses(string s) {
    int n=s.length();
    if (n==0 || n==1) return 0;
    vector <pair <int,char> > str(n);

    for (int i=0;i<n;i++){
        str[i].second=s[i];
        str[i].first=i;
    }
    set <pair<int,char> > indexes;
    for (int j=0;j<str.size() -1;){
        if (str[j].second=='(' && str[j+1].second==')'){
                indexes.insert(str[j]);
                indexes.insert(str[j+1]);
                str.erase(str.begin()+j+1);
                str.erase(str.begin()+j);
                if (str.empty()) break;
                if (j) j--;
        }
        else {
            j++;
        }
    }
  

    if (indexes.empty()) return 0;
    int res=0;
    for (set<pair<int, char>>::iterator it = indexes.begin(); it
    != indexes.end(); ) {
     
        int startindex=it->first;
        int tempres=0;
        while(it!=indexes.end() && it->first - startindex ==
        tempres){
            it++;
            tempres++;
        }

        res=(res>tempres)?(res):(tempres);
    }

    return res;


}

int main() {
           
    string s;
    cin >> s;
    cout << longestValidParentheses(s);
        
}