#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Fungsi pembanding untuk qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;

    // Membaca jumlah bilangan
    scanf("%d", &n);

    // Alokasi memori untuk array
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Membaca bilangan-bilangan
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Mengurutkan array
    qsort(arr, n, sizeof(int), compare);

    // Menampilkan hasil yang sudah diurutkan
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    // Membebaskan memori
    free(arr);

    return 0;
}
