//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, d = 0;
    char curr;

    while (n--) {
        cin >> curr;
        if (curr == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}