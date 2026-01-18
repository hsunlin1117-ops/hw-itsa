#include <stdio.h>

int main(void) {
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    int win = 0;

    // 檢查列
    for (int i = 0; i < 3; i++) {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
            win = 1;
    }

    // 檢查行
    for (int j = 0; j < 3; j++) {
        if (a[0][j] == a[1][j] && a[1][j] == a[2][j])
            win = 1;
    }

    // 檢查對角線
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
        win = 1;
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
        win = 1;

    printf(win ? "True\n" : "False\n");
    return 0;
}
