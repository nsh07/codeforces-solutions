//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

#define lli long long

using namespace std;

bool isTPrime(lli num) {
    if (num == 1) return false;
    if (num == 4) return true;

    double root = sqrt(num), rootRoot = sqrt(root);
    if (root != (int)root) return false;

    bool rootPrime = true;

    for (int i = 2; i < rootRoot + 1; i++) {
        if ((int)root % i == 0) {
            rootPrime = false;
            break;
        }
    }

    return rootPrime;
}

int main() {
    int n;
    cin >> n;

    vector<lli> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (auto num : nums) {
        cout << (isTPrime(num) ? "YES\n" : "NO\n");
    }
}