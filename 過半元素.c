#include <stdio.h>

int main(void) {
    int a[20];

    while (1) {
        int n = 0;

        // Åª¤@¦æ
        while (scanf("%d", &a[n]) == 1) {
            n++;
            if (getchar() == '\n') break;
        }

        if (n == 0) break; // EOF

        // Boyer-Moore
        int cand = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cand = a[i];
                cnt = 1;
            } else if (a[i] == cand) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // ÅçÃÒ
        int freq = 0;
        for (int i = 0; i < n; i++)
            if (a[i] == cand) freq++;

        if (freq > n / 2)
            printf("%d\n", cand);
        else
            printf("NO\n");
    }

    return 0;
}
