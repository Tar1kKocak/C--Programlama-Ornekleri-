#include <iostream>

     // Yazilimin amaci : Cinsiyet ve boy'a göre degiskenlik gosteren mulakat.


using namespace std;

int main()
{
    char cinsiyet;
    int boy;

    cout<<"Cinsiyetinizi belirtiniz(E,e/K,k)";
    cin>>cinsiyet;
    cout<<"Boyunuzu giriniz:";
    cin>>boy;

    if ((cinsiyet == 'e' || cinsiyet == 'E') && boy >= 170){
        cout<<"Tebrikler.Mulakati gectiniz.";
    }
    else if ((cinsiyet == 'k' || cinsiyet == 'K') && boy >= 160){
        cout<<"Tebrikler.Mulakati gectiniz.";
    }
    else {
        cout<<"Mulakati gecemediniz.";
    }

    return 0;
}

