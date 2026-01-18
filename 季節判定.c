#include <stdio.h>

int main(void) {
    int m;
    if (scanf("%d", &m) != 1) return 0;

    if (m >= 3 && m <= 5) {
        printf("Spring\n");
    } else if (m >= 6 && m <= 8) {
        printf("Summer\n");
    } else if (m >= 9 && m <= 11) {
        printf("Autumn\n");
    } else if (m == 12 || m == 1 || m == 2) {
        printf("Winter\n");
    }
    return 0;
}
