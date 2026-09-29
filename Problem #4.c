#include <stdio.h>

int main() {
    int n;
    char c1;
    char c2;

    printf("Masukkan ukuran n: ");
    scanf("%d", &n);

    printf("Masukkan karakter baris ganjil: ");
    scanf(" %c", &c1);

    printf("Masukkan karakter baris genap: ");
    scanf(" %c", &c2);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i % 2 == 1) {
                printf("%c ", c1);
            } else {
                printf("%c ", c2);
            }
        }

        printf("\n");
    }

    return 0;
}