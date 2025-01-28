//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

#define lli long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        lli n, n_c, res = 1;
        cin >> n;
        n_c = n;

        while (n_c > 3) {
            n_c /= 4;
            res *= 2;
        }

        cout << res << '\n';
    }
}