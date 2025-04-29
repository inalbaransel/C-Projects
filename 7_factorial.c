#include <stdio.h>

int main() {
    int n, faktoriyel = 1;
    printf("Faktöriyeli alinacak sayi: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        faktoriyel *= i;
    }
    printf("%d! = %d\n", n, faktoriyel);
    return 0;
}
