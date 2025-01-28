//
// Created by nishant on 9/9/24.
//

#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;

    if ('a' <= s[0] && s[0] <= 'z') {
        s[0] -= 'a' - 'A';
    }

    std::cout << s << std::endl;
}
