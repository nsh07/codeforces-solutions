//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        int x = 0, i = 1;

        do {
            x += pow(-1, i) * (2 * i - 1);
            i++;
        }
        while (-n <= x && x <= n);

        if (i % 2) cout << "Kosuke" << endl;
        else cout << "Sakurako" << endl;
    }
}