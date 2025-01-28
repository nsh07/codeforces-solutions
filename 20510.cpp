//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, diff = 0;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            if (i < n - 1) {
                if (a[i] > b[i + 1]) diff += a[i] - b[i + 1];
            } else
                diff += a[i];
        }

        cout << diff << '\n';
    }
}