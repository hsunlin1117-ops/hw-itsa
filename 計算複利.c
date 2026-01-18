#include <stdio.h>
#include <math.h>

int main(void) {
    long double r;
    long long n, p;

    if (scanf("%Lf%lld%lld", &r, &n, &p) != 3) return 0;

    if (r > 1.0L) r /= 100.0L;

    long double sum = 0.0L;
    while (n--) {
        sum = (sum + (long double)p) * (1.0L + r);  // 月初投入，月底計息
    }

    const long double eps = 1e-12L;
    long long ans = (long long)floorl(sum + eps);

    printf("%lld\n", ans);
    return 0;
}
