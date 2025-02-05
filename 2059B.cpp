//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>
#include <vector>

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
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        inputVector(n, a);

        int index = 2, index1 = 1;

        for (int i = n - k + 1; i < n; i += 2) {
            if (a[i] != index) {
                break;
            }
            index++;
        }

        for (int i = n - k + 1; i < n; i += 2) {
            if (a[i] != index1) {
                break;
            }
            index1++;
        }

        cout << ((n == k) ? index1 : min(index, index1)) << '\n';
    }
}
