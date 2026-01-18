#include <stdio.h>

int main(void) {
    char ans[5], guess[5];

    scanf("%s", ans);   // ¥¿½Tµª®×

    while (1) {
        scanf("%s", guess);
        if (guess[0] == '0' && guess[1] == '0' &&
            guess[2] == '0' && guess[3] == '0')
            break;

        int A = 0, B = 0;

        // ºâ A
        for (int i = 0; i < 4; i++) {
            if (guess[i] == ans[i])
                A++;
        }

        // ºâ B
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i != j && guess[i] == ans[j])
                    B++;
            }
        }

        printf("%dA%dB\n", A, B);
    }

    return 0;
}
