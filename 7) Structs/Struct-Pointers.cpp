#include <iostream>

//Yazilimin Amaci : Struct-Pointers Iliskisi

using namespace std;

struct calisanlar{

    string isim;
    string soyisim;
    int yas;
    string unvan;
    string cinsiyet;

};

int main()
{
  struct calisanlar calisan1;
  struct calisanlar *calisan1adres = &calisan1;

  cout<<"Calisanin Ismi:";
  cin>>(*calisan1adres).isim;
  cout<<"Calisanin Soyismi:";
  cin>>(*calisan1adres).soyisim;
  cout<<"Calisanin Yasi:";
  cin>>(*calisan1adres).yas;
  cout<<"Calisanin Unvani:";
  cin>>(*calisan1adres).unvan;
  cout<<"Calisanin Cinsiyeti:";
  cin>>(*calisan1adres).cinsiyet;


  cout<<"Isim: "<<(*calisan1adres).isim<<endl;
  cout<<"Soyisim: "<<(*calisan1adres).soyisim<<endl;
  cout<<"Yas: "<<(*calisan1adres).yas<<endl;
  cout<<"Unvan: "<<(*calisan1adres).unvan<<endl;
  cout<<"Cinsiyet: "<<(*calisan1adres).cinsiyet<<endl;


    return 0;
}
