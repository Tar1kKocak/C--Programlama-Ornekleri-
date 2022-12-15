#include <iostream>

//Yazilimin Amaci : Asal olup olmadigini bulmak.

using namespace std;

void asallik(int *sayiadres){
    int i,asalkontrol=0;
    for(i=2;i<*sayiadres;i++){
        if(*sayiadres%i==0){
            asalkontrol++;
        }

    }

     if(asalkontrol==0){
        cout<<"Sayiniz Asal Sayidir"<<endl;
     }
     else if (asalkontrol!=0){
        cout<<"Sayiniz Asal Degildir"<<endl;
     }
}


int main()
{
    int sayi,*sayiadres=&sayi;

    cout<<"Asalligini ogrenmek istediginiz sayiyi giriniz:";
    cin>>sayi;
    asallik(&sayi);


    return 0;
}
