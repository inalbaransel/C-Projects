#include <stdio.h>

int main() {
    int n, toplam = 0;
    printf("Bir sayi gir: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        toplam += i;
    }
    printf("Toplam: %d\n", toplam);
    return 0;
}
