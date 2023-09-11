#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan angka: ");
    scanf("%d", &angka);
	//menggunakan statement if - else
    if (angka > 0) {
        printf("Angka positif\n");
    } else if (angka < 0) {
        printf("Angka negatif\n");
    } else {
        printf("Angka nol\n");
    }
    
    
	//menggunakan statement while
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    
	//menggunakan statement for loop
    for (int j = 5; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}

