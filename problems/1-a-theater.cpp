//
// Created by nishant on 12/9/24.
//

#include <bits/stdc++.h>

int main() {
    int n, m, a;
    std::cin >> n >> m >> a;
    int ar = n*m;
    int arTile = a*a;

    if (ar%arTile > 0) std::cout << ar / arTile + 1 << std::endl;
    else std::cout << ar / arTile << std::endl;
}
