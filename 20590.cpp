//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>
#include <set>
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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        inputVector(n, a);
        inputVector(n, b);

        set<int> elements;
        set<int> aUsed;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (aUsed.find(j) == aUsed.end()) {
                    elements.insert(b[i] + a[j]);
                }
            }
        }

        cout << (elements.size() >= 3 ? "YES\n" : "NO\n");
    }
}
