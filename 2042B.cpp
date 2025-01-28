//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int res = 0, c_1 = 0;
        for (auto p : freq) {
            if (p.second == 1)
                c_1++;
            else
                res++;
        }
        if (c_1) {
            res += (c_1 % 2 ? 2 * (c_1 / 2 + 1) : 2 * (c_1 / 2));
        }

        cout << res << '\n';
    }
}