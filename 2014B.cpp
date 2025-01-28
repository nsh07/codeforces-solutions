//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 10;
long long prefix[N];

int main() {
    for (long long i = 1; i < N; i++) {
        prefix[i] = prefix[i-1] + i;
    }

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long res = prefix[n] - prefix[n-k]; 
        if (res % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}