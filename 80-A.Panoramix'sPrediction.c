#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (m <= n) {
        printf("NO\n");
        return 0;
    }

    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            if (i == m) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
            return 0;
        }
    }

    printf("NO\n"); // If the loop completes without finding m as a prime
    return 0;
}
