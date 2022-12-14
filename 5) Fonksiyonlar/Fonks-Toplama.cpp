#include <iostream>

//Yazilimin Amaci : Fonks. ile toplama.

using namespace std;

int toplama(int sayi1,int sayi2){

    return sayi1+sayi2;
}

int main()
{
    int sayi1,sayi2;

    cout<<"Toplamak istediginiz iki sayiyi giriniz."<<endl;
    cin>>sayi1;
    cin>>sayi2;

    cout<<"Toplam:"<<toplama(sayi1,sayi2);



    return 0;
}
