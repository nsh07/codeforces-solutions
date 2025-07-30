//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T rpow(T a, T b) {
    if (b == 1) return a;
    if (b == 0) return 1;

    if (b % 2 == 0)
        return rpow(a, b / 2) * rpow(a, b / 2);
    else
        return rpow(a, b / 2 + 1) * rpow(a, b / 2);
}

template <typename T1, typename T2>
void inputVector(T1 n, vector<T2> &a) {
    for (T1 i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        inputVector(n, a);
        inputVector(n, b);

        int sum = -1;
        bool valid = true, hasNonNeg = false;
        for (int i = 0; i < n; i++) {
            if (b[i] == -1) continue;
            hasNonNeg = true;

            if (sum == -1) {
                sum = a[i] + b[i];
                continue;
            }
            if (a[i] + b[i] != sum) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "0\n";
            continue;
        }

        if (hasNonNeg) {
            for (int i = 0; i < n; i++) {
                if (b[i] == -1) {
                    if (k + a[i] < sum || a[i] > sum) valid = false;
                }
            }

            if (!valid)
                cout << "0\n";
            else
                cout << "1\n";

            continue;
        }

        int maxVal = *max_element(a.begin(), a.end());
        int minVal = *min_element(a.begin(), a.end());

        cout << k - (maxVal - minVal) + 1 << '\n';
    }
}
