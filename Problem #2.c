#include <stdio.h>

int main() {
    int pinBenar = 4590;
    int pin;
    int salah = 0;

    while (salah < 3) {

        printf("Masukkan PIN: ");
        scanf("%d", &pin);

        if (pin == pinBenar) {
            printf("PIN benar. Selamat datang!\n");
            break;
        } else {
            salah++;
            printf("PIN salah.\n");
        }
    }

    if (salah == 3) {
        printf("Kartu Anda Diblokir\n");
    }

    return 0;
}