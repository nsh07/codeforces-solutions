//
// Created by nishant on 15/9/24.
//

#include <bits/stdc++.h>

int main() {
    int n, out = 0;
    std::string in;
    std::cin >> n >> in;

    char last = '0';
    for (auto i:in) {
        if (i == last) out++;
        else last = i;
    }

    std::cout << out;
}
