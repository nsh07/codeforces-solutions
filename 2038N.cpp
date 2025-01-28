//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string expr;
        cin >> expr;
        int a = stoi(expr.substr(0, 1));
        int b = stoi(expr.substr(2, 1));
        if (a > b)
            cout << a << '>' << b << '\n';
        else if (a < b)
            cout << a << '<' << b << '\n';
        else
            cout << a << '=' << b << '\n';
    }
}