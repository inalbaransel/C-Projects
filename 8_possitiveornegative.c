#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);
    if (sayi > 0)
        printf("Pozitif\n");
    else if (sayi < 0)
        printf("Negatif\n");
    else
        printf("Sayi sifirdir\n");
    return 0;
}
