//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m1, m2, a, b, c;
        cin >> m1 >> a >> b >> c;
        m2 = m1;
        int seated = 0;

        if (m1 >= a) {
            m1 -= a;
            seated += a;
        } else {
            seated += m1;
            m1 = 0;
        }

        if (m2 >= b) {
            m2 -= b;
            seated += b;
        } else {
            seated += m2;
            m2 = 0;
        }

        if (m1 + m2 >= c)
            seated += c;
        else
            seated += m1 + m2;

        cout << seated << '\n';
    }
}