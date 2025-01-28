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
        int a[2 * n - 1][n];
        int sumTotal = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < 2 * n - 1; j++)
                a[j][i] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[j + n - i - 1][i];
            }
        }

        for (int i = 0; i < 2 * n - 1; i++) {
            int minVal = 0;
            for (int j = 0; j < n; j++) {
                if (a[i][j] < minVal) minVal = a[i][j];
            }
            if (minVal < 0) sumTotal += -minVal;
        }

        cout << sumTotal << endl;
    }
}