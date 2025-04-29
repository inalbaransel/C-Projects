#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);
    if (sayi % 2 == 0)
        printf("Cift sayi\n");
    else
        printf("Tek sayi\n");
    return 0;
}
