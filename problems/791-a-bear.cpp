//
// Created by nishant on 9/9/24.
//

#include <iostream>

int main() {
    int a, b, iters = 0;
    std::cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        iters++;
    }

    std::cout << iters << std::endl;
}
