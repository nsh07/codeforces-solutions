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
        int n, a, b;
        cin >> n >> a >> b;
        string steps;
        cin >> steps;

        int north = 0, east = 0;
        bool possible = false;
        for (int i = 0; i < 1000; i++) {
            for (auto step : steps) {
                switch (step) {
                    case 'N':
                        north++;
                        break;
                    case 'E':
                        east++;
                        break;
                    case 'W':
                        east--;
                        break;
                    case 'S':
                        north--;
                        break;
                }
                if (north == b && east == a) {
                    possible = true;
                    break;
                }
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
}
