//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        int cons0 = 0, res = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cons0++;
                if (cons0 == m) {
                    cons0 = 0;
                    i += k - 1;
                    res++;
                    continue;
                }
            } else
                cons0 = 0;
        }

        cout << res << '\n';
    }
}
