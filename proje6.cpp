#include <iostream>
using namespace std;

int main() {
    int sayi, tersi = 0, kalan;

    cout << "Bir sayi giriniz: ";
    cin >> sayi;

    while (sayi > 0) {
        kalan = sayi % 10;         
        tersi = (tersi * 10) + kalan; 
        sayi = sayi / 10;          
    }

    cout << "Sayinin tersi: " << tersi << endl;

    return 0;
}