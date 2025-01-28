//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, k, curr;
    cin >> t;

    while (t--) {
        int gold = 0, people = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr >= k) {
                gold += curr;
            }
            else if (curr == 0) {
                if (gold - 1 >= 0) {
                    gold--;
                    people++;
                }
            }
        }

        cout << people << '\n';
    }
}