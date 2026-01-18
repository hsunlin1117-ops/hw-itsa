#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, c;
    while (scanf("%d %d", &r, &c) == 2) {
        int *a = (int*)malloc(sizeof(int) * r * c);
        if (!a) return 0;

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &a[i * c + j]);

        // ¿é¥XÂà¸m¡Gc ¦æ r ¦C
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                if (i) putchar(' ');
                printf("%d", a[i * c + j]);
            }
            putchar('\n');
        }

        free(a);
    }
    return 0;
}
