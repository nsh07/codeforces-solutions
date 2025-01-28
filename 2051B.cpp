//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int out = 0;
        out += 3 * (n / (a + b + c));
        n -= (a + b + c) * (n / (a + b + c));
        if (n > 0) {
            out++;
            n -= a;
        }
        if (n > 0) {
            out++;
            n -= b;
        }
        if (n > 0) {
            out++;
            n -= c;
        }
        cout << out << '\n';
    }
}