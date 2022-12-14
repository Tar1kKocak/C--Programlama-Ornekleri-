#include <iostream>

/*  Yazilimin Amaci :Kullanicidan alinan baslangic ve bitis degerleri arasýndaki sayýlardan 2 ile tam bölünenlerin yanýna "a",3 ile tam bölünenlerin yanýna "b"
   hem 2 hem de 3'e bölünenlerin sonuna "ab" yazdýrýnýz ve sayý 5'e bölünüyorsa hiçbir þey yazmadan döngüde sonraki deðerlere bakmaya devam eden
   C programý*/

using namespace std;

int main()
{

    int baslangic,bitis,i;

    cout<<"Lutfen bir baslangic sayisi giriniz:";
    cin>>baslangic;
    cout<<"Lutfen bir bitis sayisi giriniz:";
    cin>>bitis;

    i=baslangic;

    while (i<=bitis){

        if (i % 5 == 0){
            i++;
            continue;

        }
        else if (i % 2 == 0 && i % 3 == 0) {
            cout<<i<<"-"<<"ab"<<endl;

        }
        else if (i % 2 == 0) {
            cout<<i<<"-"<<"a"<<endl;

        }
        else if (i % 3 == 0) {
            cout<<i<<"-"<<"b"<<endl;


        }
        i++;

    }


    return 0;
}
