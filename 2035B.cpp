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

        if (n == 1 || n == 3) {
            cout << -1 << '\n';
            continue;
        } else if (n == 2) {
            cout << 66 << '\n';
            continue;
        } else if (n == 4) {
            cout << 3366 << '\n';
            continue;
        }

        long long multiplier = 50;

        for (int i = 0; i < n - 4; i++) {
            cout << 3;
        }
        if (n % 2 == 0)
            cout << 3366 << '\n';
        else
            cout << 6366 << '\n';
    }
}