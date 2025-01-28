//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ma(m), ka(k);

        for (int i = 0; i < m; i++) {
            cin >> ma[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> ka[i];
        }

        if (k < n - 1) {
            for (int i = 0; i < m; i++) {
                cout << '0';
            }
            cout << '\n';
            continue;
        }
        if (k == n) {
            for (int i = 0; i < m; i++) {
                cout << '1';
            }
            cout << '\n';
            continue;
        }

        for (auto n : ma) {
            if (binary_search(ka.begin(), ka.end(), n) == false)
                cout << '1';
            else
                cout << '0';
        }
        cout << '\n';
    }
}