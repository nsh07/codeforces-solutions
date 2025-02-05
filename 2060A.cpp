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
        vector<int> a(5);
        cin >> a[0] >> a[1] >> a[3] >> a[4];
        a[2] = a[3] - a[1];

        int out1 = 0, out2 = 0;

        for (int i = 2; i < 5; i++) {
            if (a[i] == a[i - 1] + a[i - 2]) out1++;
        }

        a[2] = a[4] - a[3];

        for (int i = 2; i < 5; i++) {
            if (a[i] == a[i - 1] + a[i - 2]) out2++;
        }

        cout << max(out1, out2) << '\n';
    }
}
