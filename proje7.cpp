#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); 

   
    string icerik[] = {"100 ohm", "120 ohm", "200 ohm", "220 ohm", "300 ohm", 
                       "320 ohm", "400 ohm", "480 ohm", "520 ohm", "1 kohm"};
    
    int adetler[10];

   
    for(int i = 0; i < 10; i++) {
        adetler[i] = rand() % 91 + 10; 
    }

    int secim, miktar;
    char devam;

    do {
        cout << "\nNo\tIcerik\t\tAdet" << endl;
        for(int i = 0; i < 10; i++) {
            cout << i + 1 << "\t" << icerik[i] << "\t\t" << adetler[i] << endl;
        }
        cout << "\nKutu numarasi giriniz (1-10): ";
        cin >> secim;
        cout << "Alinacak komponent adedini giriniz: ";
        cin >> miktar;

        if(miktar <= adetler[secim - 1]) {
            adetler[secim - 1] = adetler[secim - 1] - miktar;
            cout << "Stok guncellendi." << endl;
        } else {
            cout << "Yetersiz stok!" << endl;
        }

        cout << "Isleme devam edilsin mi? (e/h): ";
        cin >> devam;

    } while(devam == 'e');

    return 0;
}