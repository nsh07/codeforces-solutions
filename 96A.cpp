//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string in;
    int _1 = 0, _0 = 0;
    cin >> in;
    
    for (auto i:in) {
        if (i == '1') {
            _1++;
            _0 = 0;
        } else {
            _0++;
            _1 = 0;
        }

        if (_1 >= 7 || _0 >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}