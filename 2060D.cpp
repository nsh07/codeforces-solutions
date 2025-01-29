//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T1, typename T2>
void inputVector(T1 n, vector<T2> &a) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        inputVector(n, a);

        bool possible = true;
        for (int i = 1; i < n; i++) {
            a[i] = a[i] - a[i - 1];
            if (a[i] < 0) {
                possible = false;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
}
