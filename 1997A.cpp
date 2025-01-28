//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string pass;
        cin >> pass;
        char last = '-';
        bool done = false;

        for (auto letter : pass) {
            if (!done) {
                if (last == letter) {
                    if (letter != 'a')
                        cout << 'a' << letter;
                    else
                        cout << 'b' << letter;
                    done = true;
                } else
                    cout << letter;
            } else {
                cout << letter;
            }
            last = letter;
        }

        if (!done) {
            cout << (*(pass.end() - 1) != 'a' ? 'a' : 'b');
        }

        cout << '\n';
    }
}
