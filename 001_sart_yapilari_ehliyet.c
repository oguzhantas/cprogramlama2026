#include <stdio.h>
int main(void) {
    int yas;
    printf("Yas giriniz :");
    scanf("%d",&yas);

    if (yas>=18) {
        printf("Ehliyet alabilirsiniz");
    }
    else {
        printf("Ehliyet icin henuz yasiniz kucuk");
    }
    return 0;
}
