#include <stdio.h>
#include <string.h>

int main(void) {
    char pat[200], txt[600];

    while (scanf("%s %s", pat, txt) == 2) {
        int m = (int)strlen(pat);
        int n = (int)strlen(txt);
        int cnt = 0;

        for (int i = 0; i + m <= n; i++) {
            if (strncmp(&txt[i], pat, m) == 0) cnt++;
        }

        printf("%d\n", cnt);
    }
    return 0;
}
