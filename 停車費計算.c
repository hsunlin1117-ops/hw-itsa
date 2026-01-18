#include <stdio.h>

int main(void) {
    int in_h, in_m, out_h, out_m;
    scanf("%d %d", &in_h, &in_m);
    scanf("%d %d", &out_h, &out_m);

    int in_total  = in_h * 60 + in_m;
    int out_total = out_h * 60 + out_m;
    int minutes = out_total - in_total;          // 題目假設同一天且 out >= in

    int units = minutes / 30;                    // 未滿半小時不計費 -> floor
    int fee = 0;

    // 前 2 小時
    int u1 = units > 4 ? 4 : units;
    fee += u1 * 30;
    units -= u1;

    // 到 4 小時
    int u2 = units > 4 ? 4 : units;
    fee += u2 * 40;
    units -= u2;

    // 超過 4 小時的部分
    fee += units * 60;

    printf("%d\n", fee);
    return 0;
}
