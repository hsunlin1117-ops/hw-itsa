#include <stdio.h>

typedef struct {
    long long re, im;
} Complex;

Complex add(Complex a, Complex b) {
    Complex r = {a.re + b.re, a.im + b.im};
    return r;
}
Complex sub(Complex a, Complex b) {
    Complex r = {a.re - b.re, a.im - b.im};
    return r;
}
Complex mul(Complex a, Complex b) {
    Complex r = {a.re*b.re - a.im*b.im, a.re*b.im + a.im*b.re};
    return r;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        char op;
        long long a, b, c, d;
        scanf(" %c %lld %lld %lld %lld", &op, &a, &b, &c, &d);

        Complex x = {a, b}, y = {c, d}, ans;

        if (op == '+') ans = add(x, y);
        else if (op == '-') ans = sub(x, y);
        else ans = mul(x, y); // '*'

        printf("%lld %lld\n", ans.re, ans.im);
    }
    return 0;
}
