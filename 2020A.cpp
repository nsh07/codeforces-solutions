//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << '\n';
            continue;
        }
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        int ops = 0;

        long double log_n, log_k;
        log_n = log10((long double)n);
        log_k = log10((long double)k);

        while (n > 0) {
            if (n < k) {
                ops += n;
                break;
            }
            auto currPow = floor(log_n / log_k) - 10;
            while (pow(k, currPow + 1) <= n) {
                currPow++;
            }
            n -= pow(k, currPow);
            log_n = log10((long double)n);
            ops++;
        }

        cout << ops << '\n';
    }
}