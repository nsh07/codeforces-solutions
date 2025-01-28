//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        if (x > y) {
            if (x % k == 0) {
                if (x / k > y / k + 1)
                    cout << (x / k) * 2 - 1 << '\n';
                else
                    cout << (x / k) * 2 << '\n';
            } else {
                if (x / k > y / k)
                    cout << ((x / k) + 1) * 2 - 1 << '\n';
                else
                    cout << (x / k) * 2 << '\n';
            }
        } else {
            if (y % k == 0)
                cout << (y / k) * 2 << '\n';
            else
                cout << ((y / k) + 1) * 2 << '\n';
        }
    }
}