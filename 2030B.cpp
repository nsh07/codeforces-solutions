//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            if (i == 1) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}