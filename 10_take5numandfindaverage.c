#include <stdio.h>

int main() {
    int sayi, toplam = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d. sayiyi gir: ", i + 1);
        scanf("%d", &sayi);
        toplam += sayi;
    }
    printf("Ortalama: %.2f\n", toplam / 5.0);
    return 0;
}
