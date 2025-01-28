//
//  Created by Nishant Mishra
//

#include <bits/stdc++.h>

using namespace std;

int maxArr(int a[], int &s) {
    int max = a[0];
    
    for (int i = 0; i < s; i++) {
        if (a[i] > max) max = a[i];
    }

    return max;
}

int main()
{
    int t, n, m, l, r;
    char c;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (m--)
        {
            cin >> c >> l >> r;
            if (c == '+')
                for (int i = 0; i < n; i++)
                {
                    if (l <= a[i] && a[i] <= r)
                    {
                        a[i] += 1;
                    }
                }
            else
                for (int i = 0; i < n; i++)
                {
                    if (l <= a[i] && a[i] <= r)
                    {
                        a[i] -= 1;
                    }
                }
            cout << maxArr(a, n) << ' ';
        }
        cout << endl;
    }
}