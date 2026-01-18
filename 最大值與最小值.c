#include <stdio.h>

int main(void) {
    double x;
    double mx, mn;

    // 讀第一個當初始值
    scanf("%lf", &x);
    mx = mn = x;

    // 剩下 9 個
    for (int i = 0; i < 9; i++) {
        scanf("%lf", &x);
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }

    printf("maximum:%.2f\n", mx);
    printf("minimum:%.2f\n", mn);

    return 0;
}

