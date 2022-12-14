#include <iostream>

//Yazilimin Amaci : 1den n'e kadar olan tek ve cift sayilarin toplamini bulmak.

using namespace std;

int main()
{
    int tektoplam=0,cifttoplam=0,sayi;

    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;

    do {

    if (sayi%2==0) {
        cifttoplam+=sayi;
    }
    else if (sayi%2!=0){
        tektoplam+=sayi;
    }

    sayi--;
    }while (sayi>=1);

    cout<<"Cift sayilarin toplam degeri:"<<cifttoplam<<endl;
    cout<<"Tek sayilarin toplam degeri:"<<tektoplam<<endl;


    return 0;
}
