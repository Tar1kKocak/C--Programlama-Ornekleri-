#include <iostream>

//Yazilimin Amaci : Parola Sistemi

using namespace std;

int main()
{
    string parola,paroladogrula;
    int i,yanlis;

    while(1){

        i=0;
        yanlis=0;

        cout<<"Parola giriniz:";
        cin>>parola;
        cout<<"Parolayi tekrar giriniz:";
        cin>>paroladogrula;

        if (parola==paroladogrula){

            cout<<"Parolalar uyusuyor."<<endl;
            break;

        }
        else if (parola!=paroladogrula){
            cout<<"Parolalar uyusmuyor. Lutfen tekrar giriniz."<<endl;
        }

    }


    return 0;
}
