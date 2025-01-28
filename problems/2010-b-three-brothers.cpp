#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> in = {0, 0}, req = {1, 2, 3}, out;
    std::cin >> in[0] >> in[1];
    
    std::sort(in.begin(), in.end());
    std::set_difference(
        req.begin(), req.end(),
        in.begin(), in.end(),
        std::back_inserter(out)
    );

    std::cout << out[0] <<std::endl;
}