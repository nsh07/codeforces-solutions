//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        string x_s = to_string(x);
        int n = x_s.size();

        if (x % 33 == 0) {
            cout << "YES\n";
            continue;
        } else {
            string newX;
            for (int i = 0; i < n; i++) {
                if (x_s[i] == '3') {
                    if (i < n - 1)
                        if (x_s[i + 1] == '3') {
                            i++;
                            continue;
                        }
                }
                newX.push_back(x_s[i]);
            }

            // if (!last3) newX.push_back(x_s[x_s.size() - 1]);

            if (stoi(newX) % 33 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}