#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[1200];
    if (!fgets(line, sizeof(line), stdin)) return 0;

    char words[500][1200];
    int cnt = 0;

    char *tok = strtok(line, " \n\r");
    while (tok) {
        // 轉小寫
        for (int i = 0; tok[i]; i++)
            tok[i] = tolower((unsigned char)tok[i]);

        // 檢查是否已出現
        int found = 0;
        for (int i = 0; i < cnt; i++) {
            if (strcmp(words[i], tok) == 0) {
                found = 1;
                break;
            }
        }

        // 沒出現過就加入
        if (!found) {
            strcpy(words[cnt++], tok);
        }

        tok = strtok(NULL, " \n\r");
    }

    // 輸出
    for (int i = 0; i < cnt; i++) {
        if (i) putchar(' ');
        printf("%s", words[i]);
    }
    putchar('\n');

    return 0;
}
