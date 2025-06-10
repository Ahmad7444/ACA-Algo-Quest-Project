int Solution::solve(vector<int> &A, int B) {
    unordered_map<int, int> m;
    int i = 0, j = 0, ans = 0, n = A.size();
    while (j < n) {
        m[A[j]]++;
        while (m.size() > B) {
            m[A[i]]--;
            if (m[A[i]] == 0) m.erase(A[i]);
            i++;
        }
        if (m.size() == B) {
            int t = i;
            while (m[A[t]] > 1) {
                m[A[t]]--;
                t++;
            }
            ans += t - i + 1;
            for (int k = t; k > i; k--) m[A[k - 1]]++;
        }
        j++;
    }
    return ans;
}
