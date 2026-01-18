#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char suit;   // S H D C
    int  num;    // 數字
} Card;

static int suit_rank(char s) {
    // 大小：S > H > D > C
    switch (s) {
        case 'S': return 4;
        case 'H': return 3;
        case 'D': return 2;
        case 'C': return 1;
        default:  return 0;
    }
}

static int cmp_card(const void *pa, const void *pb) {
    const Card *a = (const Card*)pa;
    const Card *b = (const Card*)pb;

    int ra = suit_rank(a->suit);
    int rb = suit_rank(b->suit);
    if (ra != rb) return rb - ra;          // 花色大在前

    if (a->num != b->num) return b->num - a->num;  // 同花色：數字大在前
    return 0;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    getchar(); // 吃掉換行

    char line[4096];

    for (int t = 0; t < N; t++) {
        if (!fgets(line, sizeof(line), stdin)) break;

        Card cards[2048];
        int cnt = 0;

        char *tok = strtok(line, " \t\r\n");
        while (tok) {
            Card c;
            c.suit = tok[0];

            int i = 1, val = 0;
            while (tok[i] && isdigit((unsigned char)tok[i])) {
                val = val * 10 + (tok[i] - '0');
                i++;
            }
            c.num = val;

            cards[cnt++] = c;
            tok = strtok(NULL, " \t\r\n");
        }

        qsort(cards, cnt, sizeof(Card), cmp_card);

        for (int i = 0; i < cnt; i++) {
            if (i) putchar(' ');
            printf("%c%d", cards[i].suit, cards[i].num);
        }
        putchar('\n');
    }
    return 0;
}
