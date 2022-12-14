#include <iostream>

// Yazilimin Amaci : Girilen not degerlerinin ortalamasini bulmak.

using namespace std;

int main()
{

    string isim1="Tarik";
    string isim2="Batu";
    string isim3="Enes";

    int vizesonucu1[3];
    int vizesonucu2[3];
    int finalsonucu[3];
    int ortsonucu[3];
    int i;


    for (i=0;i<3;i++) {
        cout<<"Lutfen ogrencilerin birinci vize notlarini giriniz:";
        cin>>vizesonucu1[i];

    }
     for (i=0;i<3;i++) {
        cout<<"Lutfen ogrencilerin ikinci vize notlarini giriniz:";
        cin>>vizesonucu2[i];
     }
     for (i=0;i<3;i++) {
        cout<<"Lutfen ogrencilerin final notlarini giriniz:";
        cin>>finalsonucu[i];
     }

     for (i=0;i<3;i++) {
       ortsonucu[i]= (vizesonucu1[i] + vizesonucu2[i] + finalsonucu[i])/3;
     }

    cout<<isim1<<" Notu:"<<ortsonucu[0]<<endl;
    cout<<isim2<<" Notu:"<<ortsonucu[1]<<endl;
    cout<<isim3<<" Notu:"<<ortsonucu[2]<<endl;

    return 0;
}
