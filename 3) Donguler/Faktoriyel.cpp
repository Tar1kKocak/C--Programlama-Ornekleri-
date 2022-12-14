#include <iostream>

//Yazilimin Amaci : Faktoriyel Bulmak

using namespace std;

int main()
{
    int sayi,i=1,faktorsonucu=1;

    cout<<"Faktoriyelini ogrenmek istediginiz sayiyi giriniz:";
    cin>>sayi;

    while (i<=sayi) {

        faktorsonucu *=i;

        i++;
    }

    cout<<"Faktoriyeli Sonucu:"<<faktorsonucu;

    return 0;
}
