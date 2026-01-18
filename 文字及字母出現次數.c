#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[256];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int cnt[26] = {0};
    int words = 0;
    int in_word = 0;

    for (int i = 0; s[i]; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (isalpha(ch)) {
            cnt[tolower(ch) - 'a']++;
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else if (ch == ' ' || ch == ',' || ch == '.') {
            in_word = 0;
        } else if (ch == '\n' || ch == '\r') {
            // ignore
        }
    }

    printf("%d\n", words);
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            printf("%c : %d\n", 'a' + i, cnt[i]);
        }
    }
    return 0;
}
