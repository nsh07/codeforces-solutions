//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;

    cin >> k >> n >> w;

    long long cost = -n;
    
    for (int i = 1; i <= w; i++) {
        cost += i*k;
    }

    cout << (cost > 0 ? cost : 0);
}