//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, l, r;
    cin >> t;

    while (t--) {
        int n = 0;
        cin >> l >> r;

        while (l <= r) {
            n++;
            l += n;
        }
        cout << n << endl;
    }
}