//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int oddC = 0, evenC = 0;
        for (auto ai : a) {
            if (ai % 2 == 0)
                evenC++;
            else
                oddC++;
        }

        if (evenC > 0)
            cout << oddC + 1 << '\n';
        else
            cout << oddC - 1 << '\n';
    }
}
