#include <stdio.h>

int code[26] = {
    10,11,12,13,14,15,16,17,34,
    18,19,20,21,22,35,
    23,24,25,26,27,28,29,
    32,30,31,33
};

int main(void) {
    char id[11];

    while (scanf("%s", id) == 1) {
        int c = code[id[0] - 'A'];
        int X1 = c / 10;
        int X2 = c % 10;

        int sum = X1 + 9 * X2;
        int w[] = {8,7,6,5,4,3,2,1,1};

        for (int i = 1; i <= 9; i++)
            sum += (id[i] - '0') * w[i-1];

        if (sum % 10 == 0)
            printf("CORRECT!!!\n");
        else
            printf("WRONG!!!\n");
    }
    return 0;
}
