#include <stdio.h>

int main(void) {

    int dogumTarih;
    int yas;

    printf("Dogum Tarihinizi giriniz:");
    scanf("%d",&dogumTarih);

    yas = 2026-dogumTarih;
    printf("Yas: %d",yas);

    return 0;
}
