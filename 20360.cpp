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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool perfect = true;
        for (int i = 0; i < n-1; i++) {
            int temp = abs(a[i] - a[i+1]);
            if (temp != 5 && temp != 7) {
                perfect = false;
                break;
            }
        }

        if (perfect) cout << "YES\n";
        else cout << "NO\n";
    }
}