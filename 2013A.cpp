//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        if (y <= x) {
            if (n % y == 0) cout << n / y << '\n';
            else cout << n / y + 1 << '\n';
        } else {
            if (n % x == 0) cout << n / x << '\n';
            else cout << n / x + 1 << '\n';
        }
    }
}