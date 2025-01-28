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
        lli l, r, g, a = -1, b = -1;
        cin >> l >> r >> g;

        lli i = l / g;
        while (g * i <= r) {
            if (g * i >= l) {
                a = g * i;
                break;
            }
            i++;
        }

        if (a == -1) {
            cout << "-1 -1\n";
            continue;
        }

        i = r / g;
        while (g * i >= a) {
            if (__gcd(a, g * i) == g) {
                b = g * i;
                break;
            }
            i--;
        }

        if (b == -1) {
            cout << "-1 -1\n";
            continue;
        }

        cout << a << ' ' << b << '\n';
    }
}