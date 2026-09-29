#include <stdio.h>

int main() {
    int n;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i * n);
    }

    return 0;
}