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
        string s;
        cin >> s;

        bool done = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                cout << s[i] << s[i] << '\n';
                done = true;
                break;
            }
        }

        if (!done) {
            int n = s.size() - 2;
            for (int i = 0; i < n; i++) {
                if (s[i] != s[i + 1] && s[i] != s[i + 2] &&
                    s[i + 1] != s[i + 2]) {
                    cout << s[i] << s[i + 1] << s[i + 2] << '\n';
                    done = true;
                    break;
                }
            }
        }

        if (!done) cout << "-1\n";
    }
}
