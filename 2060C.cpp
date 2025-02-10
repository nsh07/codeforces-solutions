//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <cstdlib>
#include <iostream>
#include <vector>

#define N 200000

using namespace std;

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
        vector<int> a(n);
        inputVector(n, a);
        int hashArr[N + 10] = {0};

        int res = 0;
        for (auto ai : a) {
            hashArr[ai]++;
            int diff = abs(k - ai);
            if (diff != ai) {
                if (hashArr[diff] != 0) {
                    res++;
                    hashArr[diff]--;
                    hashArr[ai]--;
                }
            } else {
                if (hashArr[diff] > 1) {
                    res++;
                    hashArr[diff]--;
                    hashArr[ai]--;
                }
            }
        }

        cout << res << '\n';
    }
}
