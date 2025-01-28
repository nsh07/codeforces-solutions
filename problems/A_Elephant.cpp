//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, steps = 0;
    cin >> x;

    while (x > 0) {
        if (x >= 5) {
            x -= 5;
            steps++;
            continue;
        }
        switch (x) {
            case 4:
                x -= 4;
                break;
            case 3:
                x -= 3;
                break;
            case 2:
                x -= 2;
                break;
            case 1:
                x--;
                break;
        }
        steps++;
    }

    cout << steps << endl;
}