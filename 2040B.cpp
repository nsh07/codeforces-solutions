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

        if (n <= 2) {
            cout << n << '\n';
            continue;
        }

        int factor = 4;
        int out = 2;

        while (n - factor > 0) {
            factor = 2 * (factor + 1);
            out++;
        }

        cout << out << '\n';
    }
}