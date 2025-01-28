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
        vector<int> a(n);

        int maxInd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > a[maxInd]) maxInd = i;
        }

        if (maxInd % 2 == 1) {
            for (int i = maxInd; i < n; i++) {
                if (a[i] == a[maxInd]) {
                    if (i % 2 == 0) {
                        maxInd = i;
                        break;
                    }
                }
            }
        }

        if (n % 2 == 1) {
            if (maxInd % 2 == 1)
                cout << a[maxInd] + n / 2 << '\n';
            else
                cout << a[maxInd] + n / 2 + 1 << '\n';
        } else {
            cout << a[maxInd] + n / 2 << '\n';
        }
    }
}