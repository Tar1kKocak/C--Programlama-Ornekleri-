#include <iostream>

//Yazilimin Amaci : String pointer mantigi

using namespace std;


int main()
{
    string isimler[] = {"Tarik","Efsa","Enes","Batuhan"};
    string *isimadresi=isimler;
    int i;


    for(i=0;i<4;i++){
        cout<<*(isimadresi+i)<<endl;
    }


    return 0;
}
