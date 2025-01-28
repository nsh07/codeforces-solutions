//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    int luckyDigits = 0;
    bool isLucky = true;
    cin >> n;

    while (n > 0) {
        int curr = n % 10;
        if (curr == 4 || curr == 7) luckyDigits++;
        n /= 10;
    }

    if (luckyDigits == 0) isLucky = false;
    while (luckyDigits > 0) {
        int curr = luckyDigits % 10;
        if (curr != 4 && curr != 7) {
            isLucky = false;
            break;
        }
        luckyDigits /= 10;
    }

    cout << (isLucky ? "YES" : "NO") << endl;
}