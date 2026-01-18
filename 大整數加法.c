#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    while (N--) {
        char a[105], b[105];
        scanf("%s %s", a, b);

        int la = strlen(a), lb = strlen(b);
        int i = la - 1, j = lb - 1, carry = 0;
        char res[110];
        int k = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            res[k++] = sum % 10 + '0';
            carry = sum / 10;
        }

        // ¤Ï¦V¿é¥X
        for (int x = k - 1; x >= 0; x--)
            putchar(res[x]);
        putchar('\n');
    }
    return 0;
}
