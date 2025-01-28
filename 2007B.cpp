//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        char op;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxNum = INT_MIN;
        for (auto num : a) {
            if (num > maxNum) maxNum = num;
        }

        for (int i = 0; i < m; i++) {
            cin >> op >> l >> r;
            if (l <= maxNum && maxNum <= r) {
                (op == '+' ? maxNum++ : maxNum--);
            }
            cout << maxNum << ' ';
        }

        cout << '\n';
    }
}
