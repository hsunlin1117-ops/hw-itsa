#include <stdio.h>
#include <string.h>

int main(void) {
    const char *kbd =
    "`1234567890-=\
qwertyuiop[]\\\
asdfghjkl;'\
zxcvbnm,./\
~!@#$%^&*()_+\
QWERTYUIOP{}|\
ASDFGHJKL:\"\
ZXCVBNM<>?";

    char line[1024];
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i]; i++) {
        if (line[i] == ' ') {   // ¡¹ ÃöÁä­×¥¿
            putchar(' ');
            continue;
        }

        char *p = strchr(kbd, line[i]);
        if (p && *(p + 1))
            putchar(*(p + 1));
        else
            putchar(line[i]);
    }
    return 0;
}
