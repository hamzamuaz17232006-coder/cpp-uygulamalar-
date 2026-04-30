#include <iostream>
using namespace std;

int main(){
    cout <<" iki sayi arasinda ki sayilarin toplamini hesaplayan orogram "<<endl;
    int  sayi1,sayi2;
    int toplam=0;
    cout <<"lutfen birinci sayi giriniz:"<<endl;
    cin>>sayi1;
    cout<<"lutfen ikinci sayi giriniz:"<<endl;
    cin>>sayi2;
    if (sayi1 < sayi2){
        int temp=sayi1;
        sayi1=sayi2;
        sayi2=temp;
    }

    for (int i=sayi2+1; i<sayi1; i++){
        toplam+=i;
    }
    cout << "toplam: " << toplam << endl;
    return 0;
}