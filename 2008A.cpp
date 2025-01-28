//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 0) {
            if (b % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }

        if (a % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}