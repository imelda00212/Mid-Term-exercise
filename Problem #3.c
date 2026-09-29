#include <stdio.h>

int main() {
    int angkaRahasia = 13;
    int tebakan;

    while (1) {

        printf("Tebak angka (1-20): ");
        scanf("%d", &tebakan);

        if (tebakan == 99) {
            printf("Permainan dihentikan.\n");
            break;
        }

        if (tebakan < angkaRahasia) {
            printf("Lebih rendah.\n");
        } else if (tebakan > angkaRahasia) {
            printf("Lebih tinggi.\n");
        } else {
            printf("Cocok! Tebakan kamu benar.\n");
            break;
        }
    }

    return 0;
}