//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool done = false;
        for (int i = 0; i < n - 1; i++) {
            if (2 * a[i] > a[i + 1] && 2 * a[i + 1] > a[i]) {
                done = true;
                break;
            }
        }

        if (done) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
