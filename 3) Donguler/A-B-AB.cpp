#include <iostream>

/*  Yazilimin Amaci :Kullanicidan alinan baslangic ve bitis degerleri aras�ndaki say�lardan 2 ile tam b�l�nenlerin yan�na "a",3 ile tam b�l�nenlerin yan�na "b"
   hem 2 hem de 3'e b�l�nenlerin sonuna "ab" yazd�r�n�z ve say� 5'e b�l�n�yorsa hi�bir �ey yazmadan d�ng�de sonraki de�erlere bakmaya devam eden
   C program�*/

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
