//
//  Created by Nishant Mishra <https://github.com/nsh07>
//

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int score = a[k-1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= score && score > 0) count++; 
    }

    printf("%d", count);
}