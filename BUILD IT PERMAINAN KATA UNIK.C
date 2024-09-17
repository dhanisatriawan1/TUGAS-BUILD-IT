#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// Fungsi untuk membandingkan dua string tanpa memperhatikan kapitalisasi
int compareIgnoreCase(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower((unsigned char)*str1) != tolower((unsigned char)*str2)) {
            return 0; // Tidak sama
        }
        str1++;
        str2++;
    }
    return (*str1 == *str2); // Memastikan kedua string memiliki panjang yang sama
}

int main() {
    char str1[100], str2[100];

    // Membaca dua string dari input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Menghapus newline karakter dari string
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Membandingkan string
    if (strcmp(str1, str2) == 0) {
        printf("IDENTIK\n");
    } else if (compareIgnoreCase(str1, str2)) {
        printf("MIRIP\n");
    } else {
        printf("BERBEDA\n");
    }

    return 0;
}