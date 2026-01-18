#include <stdio.h>

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) return 0;

    unsigned char u = (unsigned char)x;  // 8-bit two's complement

    for (int i = 7; i >= 0; --i) {
        putchar(((u >> i) & 1) ? '1' : '0');
    }
    putchar('\n');
    return 0;
}
