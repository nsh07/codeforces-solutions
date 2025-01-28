#include <bits/stdc++.h>

char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    
    std::transform(a.begin(), a.end(), a.begin(), asciitolower);
    std::transform(b.begin(), b.end(), b.begin(), asciitolower);

    if (a < b) std::cout << -1 << std::endl;
    else if (b < a) std::cout << 1 << std::endl;
    else std::cout << 0 << std::endl;
}