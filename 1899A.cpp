//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

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
        int n;
        cin >> n;
        cout << (n % 3 == 0 ? "Second\n" : "First\n");
    }
}
