#include <iostream>

//Yazilimin Amaci : Overloading Mantigi : Ayný isimli fonksiyonla farklý seyler yapmak.

using namespace std;

void isimsoyle(){
    cout<<"Tarik"<<endl;
}
void isimsoyle(string isim1){
    cout<<isim1<<endl;
}
void isimsoyle (string isim1,string isim2) {
    cout<<"1.isim:"<<isim1<<"\n"<<"2.isim"<<isim2<<endl;
}

int main()
{

    isimsoyle();
    isimsoyle("Efsa");
    isimsoyle("Tarik","Efsa");

    return 0;
}
