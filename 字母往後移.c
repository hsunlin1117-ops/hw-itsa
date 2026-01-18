#include <stdio.h>
#include <string.h>

int main(void) {
    char s[105];
    int k;

    fgets(s, sizeof(s), stdin);
    scanf("%d", &k);

    k %= 26;  // ¦r¥À´`Àô

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] - 'A' + k) % 26 + 'A';
        } else if (s[i] >= '0' && s[i] <= '9') {
            s[i] = (s[i] - '0' + k % 10) % 10 + '0';
        }
    }

    printf("%s", s);
    return 0;
}
