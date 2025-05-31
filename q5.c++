

#include <iostream>
#include <vector>
using namespace std;


bool isValid(string s) {
    int n = s.length();
    vector<char> v;
    v.reserve(n);
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (j >= 0) {

                switch (s[i]) {
                    case ')':
                        if (v[j] == '(') {
                            v.resize(j);
                            j--;
                        } else {
                            return false;
                        }
                        break;

                    case '}':
                        if (v[j] == '{') {
                            v.resize(j);
                            j--;
                        } else {
                            return false;
                        }
                        break;
                    case ']':
                        if (v[j] == '[') {
                            v.resize(j);
                            j--;
                        } else {
                            return false;
                        }
                        break;
                    }
            } else
                return false;
        } else {
            j++;
            v.push_back(s[i]);
        }
    }

    if (v.empty())
        return true;
    else
        return false;

}
        
int main() {
           
        string s;
        cin >> s;
        cout << isValid(s);
            
}