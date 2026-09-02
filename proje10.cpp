#include <iostream>

using namespace std;

// Bir sayının küpünü hesaplayan fonksiyon
int kubuAl(int sayi) {
    return sayi * sayi * sayi;
}

int main() {
    cout << "Basamaklarinin kupleri toplami kendisine esit olan (Armstrong) 3 basamakli sayilar:" << endl;

    // 3 basamakli pozitif tamsayilar (100 ile 999 araligi)
    for (int i = 100; i < 1000; i++) {
        int yuzler = i / 100;         // Yüzler basamağı
        int onlar = (i / 10) % 10;    // Onlar basamağı
        int birler = i % 10;          // Birler basamağı

        // Basamakların küplerinin toplamını fonksiyon kullanarak hesaplıyoruz
        int kuplerToplam = kubuAl(yuzler) + kubuAl(onlar) + kubuAl(birler);

        // Küpler toplamı sayının kendisine eşit mi kontrolü
        if (kuplerToplam == i) {
            cout << i << endl;
        }
    }

    return 0;
}