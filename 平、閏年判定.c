#include <stdio.h>

int main(void) {
    int y;
    if (scanf("%d", &y) != 1) return 0;

    int leap = (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);

    if (leap) printf("Bissextile Year\n");
    else      printf("Common Year\n");

    return 0;
}
