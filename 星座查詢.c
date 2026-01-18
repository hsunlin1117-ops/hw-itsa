#include <stdio.h>

int main(void) {
    int m, d;
    scanf("%d %d", &m, &d);

    if ((m==1 && d>=21) || (m==2 && d<=18)) puts("Aquarius");
    else if ((m==2 && d>=19) || (m==3 && d<=20)) puts("Pisces");
    else if ((m==3 && d>=21) || (m==4 && d<=20)) puts("Aries");
    else if ((m==4 && d>=21) || (m==5 && d<=21)) puts("Taurus");
    else if ((m==5 && d>=22) || (m==6 && d<=21)) puts("Gemini");
    else if ((m==6 && d>=22) || (m==7 && d<=22)) puts("Cancer");
    else if ((m==7 && d>=23) || (m==8 && d<=23)) puts("Leo");
    else if ((m==8 && d>=24) || (m==9 && d<=23)) puts("Virgo");
    else if ((m==9 && d>=24) || (m==10 && d<=23)) puts("Libra");
    else if ((m==10 && d>=24) || (m==11 && d<=22)) puts("Scorpio");
    else if ((m==11 && d>=23) || (m==12 && d<=21)) puts("Sagittarius");
    else puts("Capricorn");

    return 0;
}
