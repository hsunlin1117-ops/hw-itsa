#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    while (scanf("%1023s", s) == 1) {
        int i = 0, j = (int)strlen(s) - 1;
        int ok = 1;
        while (i < j) {
            if (s[i] != s[j]) { ok = 0; break; }
            i++; j--;
        }
        puts(ok ? "YES" : "NO");
    }
    return 0;
}
