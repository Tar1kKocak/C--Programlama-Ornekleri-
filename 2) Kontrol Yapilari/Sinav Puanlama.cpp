#include <iostream>

	//Yazilimin Amaci: Sinavdan alinan puanin derecesini ogrenmek.


using namespace std;

int main()
{
    int alinannot;

    cout<<"Aldiginiz notu giriniz:";
    cin>>alinannot;


    /*
 	   80-100 = çok iyi
 	   60-80 = iyi
 	   40-60 = orta
 	   20-40 = kötü
 	   0-20 = çok kötü */

    if (alinannot<=100 && alinannot>=80) {
        cout<<"Puaniniz Cok Iyi";
    }
    else if (alinannot<80 && alinannot>=60) {
        cout<<"Puaniniz Iyi";
    }
    else if (alinannot<60 && alinannot>=40) {
        cout<<"Puaniniz Orta";
    }
    else if (alinannot<40 && alinannot>=20) {
        cout<<"Puaniniz Kotu";
    }
    else if (alinannot<20 && alinannot>=0) {
        cout<<"Puaniniz Cok Kotu";
    }
    else {
        cout<<"Lutfen 0-100 arasinda bir deger giriniz.";
    }


    return 0;
}
