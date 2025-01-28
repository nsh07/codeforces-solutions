//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, maxA = 0, minA = INT_MAX;
        bool discont = false, nonZero = false;
        cin >> n;
        vector<int> a(n);
        vector<int> hash(101, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            hash[a[i]]++;
            if (a[i] > maxA) maxA = a[i];
        }

        for (int i = 0; i < maxA + 1; i++) {
            if (hash[i] == 0) {
                minA = i;
            }
        }

        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] != i) discont = true;
            if (a[i] != 0) nonZero = true;
        }

        if (discont && nonZero)
            cout << minA + 1 << '\n';
        else if (!nonZero)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
}