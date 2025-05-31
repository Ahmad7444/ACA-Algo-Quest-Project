#include <bits/stdc++.h>

using namespace std;

void sortByxFactor(vector < pair < int, int >> ::iterator start, int l) {
    if (l == 1) return;
    sortByxFactor(start, l / 2);
    sortByxFactor(start + l / 2, l - l / 2);
    vector < pair < int, int >> v(start, start + l);
    int k = 0;
    int i = 0, j = l / 2;
    for (; i < l / 2 && j < l; k++) {
        if (v[i].first * v[j].second > v[i].second * v[j].first) {
            *(start + k) = v[i];
            i++;
        }
        else {
            *(start + k) = v[j];
            j++;
        }
    }
    while (i < l / 2) {
        *(start + k) = v[i];
        i++;
        k++;
    }
    while (j < l) {
        *(start + k) = v[j];
        j++;
        k++;
    }


}




int main() {
    int nooftest;
    cin >> nooftest;

    while (nooftest--) {
        int n;
        cin >> n;

        vector < pair < int, int >> rods(n);

        long long length = 0;

        for (int i = 0; i < n; i++) {
            cin >> rods[i].first;

        }

        for (int i = 0; i < n; i++) {
            cin >> rods[i].second;

        }

        long long res = 0;


        sortByxFactor(rods.begin(), n);
        for (int i = 0; i < n; i++) {
            res += rods[i].second * length;
            length += rods[i].first;
        }




        cout << res << endl;

    }

    return 0;
}