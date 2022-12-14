#include <iostream>

    //Yazilimin Amaci : Kullanicidan alinan  pozitif bir tam sayinin asal olup olmadigini bulmak.


using namespace std;

int main()
{
    int sayi,i,kontrol=0;

    cout<<"Bir sayi giriniz:";
    cin>>sayi;

    for(i=2;i<sayi;i++){

        if(sayi%i==0){
            kontrol++;
        }
    }
    if (kontrol!=0){
        cout<<"Sayiniz Asal Bir Sayi Degildir.";
    }
    else if (kontrol==0){
        cout<<"Sayiniz Asal Bir Sayidir.";
    }


    return 0;
}
