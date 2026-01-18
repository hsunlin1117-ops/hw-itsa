#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);
    getchar(); // 吃掉第一行後面的換行

    char s[256];
    while (T--) {
        if (!fgets(s, sizeof(s), stdin)) break;

        int sum = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == '\n') break;   // 不算換行
            sum += (unsigned char)s[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
