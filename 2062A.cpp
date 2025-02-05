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
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int oneC = 0;

        for (auto c : s) {
            if (c == '1') oneC++;
        }

        cout << oneC << '\n';
    }
}
