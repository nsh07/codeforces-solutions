//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << max(n, m) + 1 << '\n';
    }
}
