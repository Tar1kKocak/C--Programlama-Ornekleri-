#include <iostream>

//Yazilimin Amaci : Pozitif-Negsatif Bulma

using namespace std;

int main()
{
   int sayi;

   cout<<"Bir adet sayi giriniz:";
   cin>>sayi;

   if (sayi>=0) {
    cout<<"Pozitif bir sayi."<<endl;
   }
   else if (sayi<0){
    cout<<"Negatif bir sayi."<<endl;
   }


    return 0;
}
