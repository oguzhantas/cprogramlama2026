#include <stdio.h>

int main(void) {
    int a,b,c;
    int toplam, ortalama;

    a=5;    b=6;    c=7;
    toplam=a+b+c;
    ortalama=(a+b+c)/3;

    printf("Toplam=%d, Ortalama=%d ",toplam, ortalama);
    return 0;
}
