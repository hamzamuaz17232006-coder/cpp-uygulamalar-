#include <iostream>
using namespace std;

int main(){
    cout << "lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz:";
    int sayi;
    cin >> sayi;
    int faktoriyel = 1;
    for (int i = sayi; i >= 1; i--){
        faktoriyel *= i;
    }
    cout << "faktoriyel: " << faktoriyel << endl;
    return 0;
}