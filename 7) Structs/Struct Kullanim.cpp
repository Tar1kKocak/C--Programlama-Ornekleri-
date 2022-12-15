#include <iostream>

//Yazilimin Amaci : Struct kullanimi

using namespace std;

struct ogrenci{

int numara;
string isim;
string soyisim;
string bolum;
string cinsiyet;



};

int main()
{
    ogrenci ogr1 = {13457,"Tarik","Kocak","Elektrik-Elektronik Muh.","Erkek"};

    cout<<ogr1.isim<<endl;
    cout<<ogr1.soyisim<<endl;
    cout<<ogr1.numara<<endl;
    cout<<ogr1.bolum<<endl;
    cout<<ogr1.cinsiyet<<endl;


    return 0;
}
