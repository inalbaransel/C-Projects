#include <stdio.h>

int main() {
    int a, b;
    printf("Iki sayi gir: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d daha buyuk.\n", a);
    else if (b > a)
        printf("%d daha buyuk.\n", b);
    else
        printf("Sayi esittir.\n");
    return 0;
}
