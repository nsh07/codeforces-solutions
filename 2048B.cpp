//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, curr = 1;
        cin >> n >> k;
        vector<int> perm(n);

        for (int i = k - 1; i < n; i += k) {
            perm[i] = curr;
            curr++;
        }

        for (int i = 0; i < n; i++) {
            if (perm[i] == 0) {
                perm[i] = curr;
                curr++;
            }
        }

        for (auto num : perm) cout << num << ' ';
        cout << '\n';
    }
}