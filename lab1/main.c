#include <stdio.h>


int main(void) {
    double x;
    long long n;
    if (scanf("%lf", &x) != 1) return -1;
    if (scanf("%lld", &n) != 1) return -1;
    if (x <= -1.0 || x > 1.0) {
        return -2;
    }
    if (n < 1) {
        return -3;
    }
    double ln = 0;
    double x_pow = x;
    for (long long i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            ln -= x_pow / i;
        } else {
            ln += x_pow / i;
        }
        x_pow *= x;
    }
    printf("%lf", ln);
    return 0;
}
