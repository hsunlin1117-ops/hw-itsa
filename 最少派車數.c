#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int t, d; // time, delta
} E;

int cmp(const void *a, const void *b) {
    E *x = (E*)a, *y = (E*)b;
    if (x->t != y->t) return x->t - y->t;
    return x->d - y->d; // ¥ý -1 ¦A +1
}

int main() {
    int n;
    scanf("%d", &n);

    E e[60];
    for (int i = 0; i < n; i++) {
        int s, d;
        scanf("%d %d", &s, &d);
        e[2*i]   = (E){s, +1};
        e[2*i+1] = (E){d, -1};
    }

    qsort(e, 2*n, sizeof(E), cmp);

    int cur = 0, ans = 0;
    for (int i = 0; i < 2*n; i++) {
        cur += e[i].d;
        if (cur > ans) ans = cur;
    }

    printf("%d\n", ans);
    return 0;
}
