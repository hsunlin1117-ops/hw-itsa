#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    x=x/3;
    x=3*(1+x)*x/2;
    printf("%d",x);
}
