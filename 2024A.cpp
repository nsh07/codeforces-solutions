//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a > b) {
            cout << a << '\n';
            continue;
        }
        cout << (2 * a - b >= 0 ? 2 * a - b : 0) << '\n';
    }
}