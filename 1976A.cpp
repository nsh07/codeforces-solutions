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
        string pass;
        cin >> n >> pass;

        bool strong = true;
        for (int i = 0; i < pass.size() - 1; i++) {
            if (pass[i + 1] < pass[i]) {
                strong = false;
                break;
            }
        }

        if (strong)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}