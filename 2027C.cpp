//
//  Created by Nishant Mishra
//
// 1<i≤|a| and ai=|a|+1−i


#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        long long a[n+1];
        long long elements1 = n, elements2 = n;
        bool run = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i+1];
        }

        while (run) {
            run = false;

            for (int i = n; i > 1; i--) {
                long long val = elements1 + 1 - i;
                if (a[i] == val) {
                    elements1 += i - 1;
                    run = true;
                }
            }
        }

        run = true;
        while (run) {
            run = false;

            for (int i = 2; i <= n; i++) {
                long long val = elements2 + 1 - i;
                if (a[i] == val) {
                    elements2 += i - 1;
                    run = true;
                }
            }
        }

        cout << (elements1 > elements2 ? elements1 : elements2) << endl;
    }
}