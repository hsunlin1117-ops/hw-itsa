#include <stdio.h>
#include <stdlib.h>

int digit_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int cmp(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    int sx = digit_sum(x);
    int sy = digit_sum(y);

    if (sx != sy) return sx - sy;   // 各位數和小的在前
    return x - y;                   // 數值小的在前
}

int main(void) {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    qsort(arr, N, sizeof(int), cmp);

    for (int i = 0; i < N; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
