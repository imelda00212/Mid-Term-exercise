#include <stdio.h>

int main() {
    int pilihan;
    int jumlahProduk = 0;
    int total = 0;

    do {
        printf("\n===== VENDING MACHINE =====\n");
        printf("1. Air Mineral - Rp15000\n");
        printf("2. Roti        - Rp18000\n");
        printf("3. Kopi        - Rp20000\n");
        printf("4. Snack       - Rp22000\n");
        printf("5. Jus         - Rp25000\n");
        printf("6. Selesai\n");

        printf("Pilih produk: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Anda memilih Air Mineral\n");
            total = total + 15000;
            jumlahProduk++;
        }
        else if (pilihan == 2) {
            printf("Anda memilih Roti\n");
            total = total + 18000;
            jumlahProduk++;
        }
        else if (pilihan == 3) {
            printf("Anda memilih Kopi\n");
            total = total + 20000;
            jumlahProduk++;
        }
        else if (pilihan == 4) {
            printf("Anda memilih Snack\n");
            total = total + 22000;
            jumlahProduk++;
        }
        else if (pilihan == 5) {
            printf("Anda memilih Jus\n");
            total = total + 25000;
            jumlahProduk++;
        }
        else if (pilihan == 6) {
            printf("Pemilihan selesai.\n");
        }
        else {
            printf("Pilihan tidak valid.\n");
        }

    } while (pilihan != 6 && jumlahProduk < 3 && total < 50000);

    printf("\n===== HASIL TRANSAKSI =====\n");
    printf("Jumlah produk: %d\n", jumlahProduk);
    printf("Total tagihan: Rp%d\n", total);

    return 0;
}