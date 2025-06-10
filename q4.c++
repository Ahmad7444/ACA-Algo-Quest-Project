class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> a(26), b(26), ans;
        int n = s.size(), m = p.size();
        if (m > n) return ans;
        for (int i = 0; i < m; i++) b[p[i]-'a']++;
        for (int i = 0; i < m; i++) a[s[i]-'a']++;
        if (a == b) ans.push_back(0);
        for (int i = m; i < n; i++) {
            a[s[i]-'a']++;
            a[s[i-m]-'a']--;
            if (a == b) ans.push_back(i - m + 1);
        }
        return ans;
    }
};
