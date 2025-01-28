#include <iostream>
#include <cmath>

int main() {
    int t, n, lsqrt;
    std::string s, out;
    std::cin >> t;

    while (t--) {
        std::cin >> n;
        std::cin >> s;
        lsqrt = std::sqrt(s.length());
        
        if (lsqrt != std::floor(lsqrt)){
            out += "NO\n";
            continue;
        }
        
        for (int i = 1; i <= lsqrt - 2; i++) {
            for 
        }
    }
}