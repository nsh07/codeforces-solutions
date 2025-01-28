//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, curr;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n];

        int minN, maxN, maxCount = 0;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            a[i] = curr;
            if (i == 0) {
                minN = curr;
                maxN = curr;
                continue;
            }
            if(curr < minN) minN = curr;
            if (curr > maxN) maxN = curr;
        }

        cout << (n - 1) * (maxN - minN) << endl;
    }
}