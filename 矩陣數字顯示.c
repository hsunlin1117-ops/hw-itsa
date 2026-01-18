#include <stdio.h>
#include <ctype.h>

#define ROWS 5
#define DW   5
#define DN   4
#define GAP  1
#define COLS (DN*DW + (DN-1)*GAP)

int main(void) {
    static const char font[10][ROWS][DW + 1] = {
        { "*****", "*   *", "*   *", "*   *", "*****" }, // 0
        { "    *", "    *", "    *", "    *", "    *" }, // 1
        { "*****", "    *", "*****", "*    ", "*****" }, // 2
        { "*****", "    *", "*****", "    *", "*****" }, // 3
        { "*   *", "*   *", "*****", "    *", "    *" }, // 4
        { "*****", "*    ", "*****", "    *", "*****" }, // 5
        { "*****", "*    ", "*****", "*   *", "*****" }, // 6
        { "*****", "    *", "    *", "    *", "    *" }, // 7
        { "*****", "*   *", "*****", "*   *", "*****" }, // 8
        { "*****", "*   *", "*****", "    *", "    *" }  // 9
    };

    char line[256];
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int d[DN], cnt = 0;
    for (int i = 0; line[i] && cnt < DN; i++) {
        if (isdigit((unsigned char)line[i])) d[cnt++] = line[i] - '0';
    }
    if (cnt != DN) return 0;

    char grid[ROWS][COLS];
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            grid[r][c] = ' ';

    for (int k = 0; k < DN; k++) {
        int base = k * (DW + GAP);
        int dig = d[k];
        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < DW; c++) {
                if (font[dig][r][c] == '*') grid[r][base + c] = '*';
            }
        }
    }

    for (int r = 0; r < ROWS; r++) {
        int end = COLS - 1;
        while (end >= 0 && grid[r][end] == ' ') end--;
        for (int c = 0; c <= end; c++) putchar(grid[r][c]);
        putchar('\n');
    }
    return 0;
}
