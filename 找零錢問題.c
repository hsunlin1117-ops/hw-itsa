#include <stdio.h>
#include <ctype.h>

int main(void) {
    long long v[4];
    int cnt = 0;

    // 讀整個 stdin，抓出 4 個整數（可處理逗號、空白、換行混用）
    int ch;
    while ((ch = getchar()) != EOF && cnt < 4) {
        if (ch == '-' || isdigit((unsigned char)ch)) {
            long long sign = 1;
            long long x = 0;

            if (ch == '-') {
                sign = -1;
                ch = getchar();
            }
            while (ch != EOF && isdigit((unsigned char)ch)) {
                x = x * 10 + (ch - '0');
                ch = getchar();
            }
            v[cnt++] = sign * x;
        }
    }

    if (cnt < 4) return 0;

    long long N  = v[0];
    long long a1 = v[1], a2 = v[2], a3 = v[3];

    long long cost = a1 * 15 + a2 * 20 + a3 * 30;
    if (cost > N) {
        printf("0\n");
        return 0;
    }

    long long change = N - cost;
    long long c50 = change / 50; change %= 50;
    long long c5  = change / 5;  change %= 5;
    long long c1  = change;

    printf("%lld,%lld,%lld\n", c1, c5, c50);
    return 0;
}
