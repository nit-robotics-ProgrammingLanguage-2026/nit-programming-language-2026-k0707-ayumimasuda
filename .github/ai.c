#include <stdio.h>

int is_prime(int x)
{
    int i;

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int i;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000) {
        printf("NG");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (is_prime(i)) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}