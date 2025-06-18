class Solution {
public:
    string getPermutation(int n, int k) {
        char s[10];
        for (int i = 0; i < n; ++i)
            s[i] = '1' + i;

        for (int count = 1; count < k; ++count) {
            int i = n - 1;
            while (i > 0 && s[i - 1] >= s[i]) i--;
            int j = n - 1;
            while (s[j] <= s[i - 1]) j--;
            swap(s[i - 1], s[j]);
            int left = i, right = n - 1;
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        s[n] = '\0';
        return string(s);
    }
};
