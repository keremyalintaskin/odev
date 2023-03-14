#include <stdio.h>

int minimumBulma(int dizi[], int boyut) {
    int minimum = dizi[0];  // 1 işlem yapıldı
    for(int i = 1; i < boyut; i++) { // boyut - 1 kere dönecek
        if(dizi[i] < minimum) { // boyut - 2 kez işlem yapılacak
            minimum = dizi[i]; // boyut - 2 kez işlem yapılacak
        }
    }
    return minimum; // 1 işlem yapıldı
}

int main() {
    int boyut; // 1 işlem yapıldı
    printf("Lutfen dizinin boyutunu giriniz: "); // 1 işlem yapıldı
    scanf("%d", &boyut); // 1 işlem yapıldı

    int dizi[boyut]; // 1 işlem yapıldı

    for(int i = 0; i < boyut; i++) { // boyut kere dönecek
        printf("Lutfen dizinin %d. elemanini giriniz: ", i + 1); // boyut kez işlem yapılacak
        scanf("%d", &dizi[i]); // boyut kez işlem yapılacak
    }

    int en_kucuk = minimumBulma(dizi, boyut); // 1 işlem yapıldı
    printf("Dizinin en kucuk elemani: %d\n", en_kucuk); // 1 işlem yapıldı

    return 0; // 1 işlem yapıldı
}
    //Bu kodda, toplam işlem sayısı T(n) = 3n + 5'dir.