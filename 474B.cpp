//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n), prefixA(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    prefixA[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefixA[i] = prefixA[i - 1] + a[i];
    }

    cin >> m;
    vector<int> juicyWorms(m);
    for (int i = 0; i < m; i++) cin >> juicyWorms[i];

    for (auto wormLabel : juicyWorms) {
        int l = 0, r = n - 1, mid;
        while (r - l > 1) {
            mid = (l + r) / 2;
            if (wormLabel <= prefixA[mid])
                r = mid;
            else
                l = mid + 1;
        }

        if (wormLabel <= prefixA[l])
            cout << l + 1 << '\n';
        else
            cout << r + 1 << '\n';
    }
}