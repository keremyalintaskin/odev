#include <stdio.h>

// ogrenci struct yapısı tanımlanıyor
struct ogrenci {
   char ad[50];
   char soyad[50];
   int no;
   char adres[100];
   long long tc_no; 
   
};

// main fonksiyonu başlıyor
int main() {
   // ogrenci struct yapısını kullanarak 5 öğrenci oluşturuluyor
   struct ogrenci ogrenci1 = {"Muhammet", "Sonmez", 734, "Istanbul", 13156285624};
   struct ogrenci ogrenci2 = {"Mehmet", "Koyuncuoglu", 234, "Istanbul", 23456789012};
   struct ogrenci ogrenci3 = {"Yalin", "Taskin", 169, "Bursa", 34567890123};
   struct ogrenci ogrenci4 = {"Reyya", "Tacemen", 456, "Bursa", 45678901234};
   struct ogrenci ogrenci5 = {"Arda", "Isik", 567, "Bursa", 56789012345};

   // her bir öğrencinin bilgileri ekrana yazdırılıyor
   printf("Ad: %s, Soyad: %s, Numara: %d, Adres: %s, TC No: %lld\n", ogrenci1.ad, ogrenci1.soyad, ogrenci1.no, ogrenci1.adres, ogrenci1.tc_no);
   printf("Ad: %s, Soyad: %s, Numara: %d, Adres: %s, TC No: %lld\n", ogrenci2.ad, ogrenci2.soyad, ogrenci2.no, ogrenci2.adres, ogrenci2.tc_no);
   printf("Ad: %s, Soyad: %s, Numara: %d, Adres: %s, TC No: %lld\n", ogrenci3.ad, ogrenci3.soyad, ogrenci3.no, ogrenci3.adres, ogrenci3.tc_no);
   printf("Ad: %s, Soyad: %s, Numara: %d, Adres: %s, TC No: %lld\n", ogrenci4.ad, ogrenci4.soyad, ogrenci4.no, ogrenci4.adres, ogrenci4.tc_no);
   printf("Ad: %s, Soyad: %s, Numara: %d, Adres: %s, TC No: %lld\n", ogrenci5.ad, ogrenci5.soyad, ogrenci5.no, ogrenci5.adres, ogrenci5.tc_no);

   // programın başarıyla sonlandırıldığını belirten değer döndürülüyor
   return 0;
}
