//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <algorithm>
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
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    inputVector(n, a);
    sort(a.begin(), a.end());

    vector<int> prefixFwd(n, 0), prefixRev(n, 0);
    for (int i = 0; i < n; i++) {
        if (i == 0)
            prefixFwd[i] = a[i];
        else
            prefixFwd[i] = prefixFwd[i - 1] + a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1)
            prefixRev[i] = a[i];
        else
            prefixRev[i] = prefixRev[i + 1] + a[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (prefixRev[i] > prefixFwd[i - 1]) {
            cout << n - i << endl;
            break;
        }
    }
}
