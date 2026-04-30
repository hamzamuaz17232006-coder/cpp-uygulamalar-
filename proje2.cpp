#include <iostream>

using namespace std;

int main()  {

    int sayi;
    int toplam =0;
    float ortalama;
    cout <<"lutfen 5 sayi giriniz:";
    for (int j=1; j<=5; j++){
        cout<<j<<".sayiyi giriniz:";
        cin>>sayi;
        toplam+=sayi;
    }
    ortalama = toplam/5.0;
  
    cout << "sayilain toplami:" << toplam << endl;
    cout << "sayilairn ortalamasi:" << ortalama << endl;

    return 0;
    
}