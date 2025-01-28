//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, num, curr;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> num;
        double sq = sqrt(n);

        if (sq != floor(sq)) {
            cout << "No" << endl;
            continue;
        }

        int s = sq;
        bool perfect = true;

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                curr = num % 10;
                if (i == 0 || i == s-1) {
                    if (curr != 1) {
                        perfect = false;
                        break;
                    }
                }
                else if ((j == 0 && curr != 1) || (j == 1 && curr != 1)) {
                    perfect = false;
                    break;
                }
                else if (j != 0 && curr != 0) {
                    perfect = false;
                    break;
                }
                num /= 10;
            }
            if (!perfect) break;
        }

        if (perfect) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}