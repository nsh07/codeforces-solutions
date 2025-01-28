//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

void strUpper(string &in) {
    int s = in.size();
    for (int i = 0; i < s; i++) {
        if ('a' <= in[i] && in[i] <= 'z') {
            in[i] = in[i] - 'a' + 'A';
        }
    }
}

void strLower(string &in) {
    int s = in.size();
    for (int i = 0; i < s; i++) {
        if ('A' <= in[i] && in[i] <= 'Z') {
            in[i] = in[i] - 'A' + 'a';
        }
    }
}

int main() {
    string name;
    cin >> name;
    int lc = 0, uc = 0;

    for (auto i:name) {
        if ('a' <= i && i <= 'z') lc++;
        else uc++;
    }

    if (lc >= uc) strLower(name);
    else strUpper(name);
    cout << name << endl;
}