//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T1, typename T2>
void inputVector(T1 n, vector<T2> &a) {
    for (T1 i = 0; i < n; i++) {
        cin >> a[i];
    }
}

string strXor(string &s1, string &s2) {
    string res(s1.size(), ' ');
    auto s1size = s1.size(), s2size = s2.size();

    for (int i = s2.size() - 1; i >= 0; i--) {
        if (s2[i] != s1[i + s1size - s2size]) res[i + s1size - s2size] = '1';
    }

    for (int i = s1size - s2size - 1; i >= 0; i--) {
        if (s1[i] == '1') res[i] = '1';
    }

    return res;
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

        int l1 = 1, r1 = s.size(), l2 = 1, r2 = 1;
        string maxXor = "";

        for (int i = 0; i < r1; i++) {
            for (int j = i + 1; j < r1; j++) {
                string substr = s.substr(i, j - i);
                string xOr = strXor(s, substr);
                if (xOr > maxXor) {
                    maxXor = xOr;
                    l2 = i + 1;
                    r2 = j;
                }
            }
        }

        cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << '\n';
    }
}
