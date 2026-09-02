#include <iostream>

using namespace std;

int main() {
    int matris[2][3];
    int transpoz[3][2];

    // Matris elemanlarını kullanıcıdan alma
    cout << "2x3 boyutundaki matrisin elemanlarini giriniz:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Matris[" << i << "][" << j << "]: ";
            cin >> matris[i][j];
        }
    }

    // Transpoz alma işlemi (satır ve sütunların yerini değiştirme)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpoz[j][i] = matris[i][j];
        }
    }

    // Orijinal matrisi ekrana yazdırma
    cout << "\nGirilen Matris (2x3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matris[i][j] << "\t";
        }
        cout << endl;
    }

    // Transpoz matrisi ekrana yazdırma
    cout << "\nMatrisin Transpozu (3x2):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpoz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}