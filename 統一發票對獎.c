#include <stdio.h>
#include <string.h>

int main(void) {
    char special[9];
    char first[3][9];
    char ticket[9];
    int N;

    long long cnt[7] = {0};
    long long total = 0;

    scanf("%s", special);
    for (int i = 0; i < 3; i++)
        scanf("%s", first[i]);

    scanf("%d", &N);

    while (N--) {
        scanf("%s", ticket);
        int hit = 0;

        /* 特獎 */
        if (strcmp(ticket, special) == 0) {
            cnt[0]++;
            total += 2000000;
            continue;
        }

        /* 頭獎 */
        for (int i = 0; i < 3; i++) {
            if (strcmp(ticket, first[i]) == 0) {
                cnt[1]++;
                total += 200000;
                hit = 1;
                break;
            }
        }
        if (hit) continue;

        /* 二獎 */
        for (int i = 0; i < 3; i++) {
            if (strncmp(ticket + 1, first[i] + 1, 7) == 0) {
                cnt[2]++;
                total += 40000;
                hit = 1;
                break;
            }
        }
        if (hit) continue;

        /* 三獎 */
        for (int i = 0; i < 3; i++) {
            if (strncmp(ticket + 2, first[i] + 2, 6) == 0) {
                cnt[3]++;
                total += 10000;
                hit = 1;
                break;
            }
        }
        if (hit) continue;

        /* 四獎 */
        for (int i = 0; i < 3; i++) {
            if (strncmp(ticket + 3, first[i] + 3, 5) == 0) {
                cnt[4]++;
                total += 4000;
                hit = 1;
                break;
            }
        }
        if (hit) continue;

        /* 五獎 */
        for (int i = 0; i < 3; i++) {
            if (strncmp(ticket + 4, first[i] + 4, 4) == 0) {
                cnt[5]++;
                total += 1000;
                hit = 1;
                break;
            }
        }
        if (hit) continue;

        /* 六獎 */
        for (int i = 0; i < 3; i++) {
            if (strncmp(ticket + 5, first[i] + 5, 3) == 0) {
                cnt[6]++;
                total += 200;
                break;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        if (i) printf(" ");
        printf("%lld", cnt[i]);
    }
    printf("\n%lld\n", total);

    return 0;
}
