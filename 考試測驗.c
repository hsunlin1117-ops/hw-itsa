#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    while (N--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int total = a + b + c;
        int fail = (a < 60) + (b < 60) + (c < 60);
        int mx = a;
        if (b > mx) mx = b;
        if (c > mx) mx = c;

        if (fail == 0) {
            puts("P");
        } else if (fail == 1) {
            if (total >= 220) puts("P");
            else puts("M");
        } else if (fail == 2) {
            if (mx >= 80) puts("M");
            else puts("F");
        } else {
            puts("F");
        }
    }
    return 0;
}
