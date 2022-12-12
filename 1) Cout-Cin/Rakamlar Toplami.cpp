#include <iostream>

//Yazilimin Amaci : Girilen sayinin rakamlari toplamini bulmak.

using namespace std;

int main()
{
    int sayi;
    int yuzbin,onbin,bin,yuzler,onlar,birler;

    cout<<"Alti basamakli bir sayi giriniz:"<<endl;
    cin>>sayi;

    yuzbin = sayi/100000;
    onbin = (sayi%100000) / 10000;
    bin = (sayi%10000) / 1000;
    yuzler = (sayi%1000) / 100;
    onlar = (sayi%100) / 10;
    birler = sayi%10;

    cout<<"Sayinizin Rakamlari Toplami :"<<yuzbin+onbin+bin+yuzler+onlar+birler<<endl;






    return 0;
}
