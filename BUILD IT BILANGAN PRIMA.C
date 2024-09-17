#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdbool.h>

// Fungsi untuk memeriksa apakah bilangan adalah bilangan prima
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    // Membaca bilangan dari input
    scanf("%d", &number);

    // Memeriksa keprimaan bilangan dan menampilkan hasil
    if (isPrime(number)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}