#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char karakter;
    int i, jumlah = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &karakter);

    // Mencari karakter dalam array
    for (i = 0; i < 10; i++) {
        if (A[i] == karakter) {
            jumlah++;
        }
    }

    // Menampilkan hasil
    if (jumlah > 0) {
        printf("%c ADA\n", karakter);
        printf("%d\n", jumlah);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
