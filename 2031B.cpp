//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

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
        vector<int> p(n);
        bool possible = true;

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            if (p[i] != i && p[i] != i + 1 && p[i] != i + 2) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
}
