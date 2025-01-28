//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n > 4) {
            for (int i = 1; i <= n; i += 2) {
                if (i != 5) cout << i << ' ';
            }
            cout << "5 4 ";
            for (int i = (n % 2 == 0 ? n : n - 1); i > 1; i -= 2) {
                if (i != 4) cout << i << ' ';
            }
            cout << '\n';
        } else
            cout << "-1\n";
    }
}
