int Solution::solve(vector<int> &A, int B) {
    int l = 0, r = 0, n = A.size(), sum = 0, cnt = 0;
    while (r < n) {
        sum += A[r];
        while (sum >= B) {
            sum -= A[l];
            l++;
        }
        cnt += r - l + 1;
        r++;
    }
    return cnt;
}
