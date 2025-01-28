//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int countSame(string s, string t) {
    int len = (s.size() < t.size() ? s.size() : t.size());
    int count = 0;

    do {
        if (s[count] == t[count]) count++;
        else break;
    } while (count < len);

    return count;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        string s, t;
        cin >> s;
        cin >> t;

        int seconds = 0;
        int same = countSame(s, t);
        if (same != 0) {
            seconds += same + 1;
            seconds += s.size() + t.size() - 2 * same;
        } else {
            seconds += s.size() + t.size();
        }

        cout << seconds << endl;
    }
}