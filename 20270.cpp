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
        int maxW = 0, maxL = 0;
        for (int i = 0; i < n; i++) {
            int tempW = 0, tempL = 0;
            cin >> tempW >> tempL;
            if (tempW > maxW) maxW = tempW;
            if (tempL > maxL) maxL = tempL;
        }

        cout << maxL * 2 + maxW * 2 << endl;
    }
}