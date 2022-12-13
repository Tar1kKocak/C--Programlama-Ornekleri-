#include <iostream>

	// Yazilimin amaci : Mevsime gore hava sartlarini ogrenmek.


using namespace std;

int main()
{


	int secim;

	cout<<"Lutfen seciminizi yapiniz..."<<endl;

	cout<<"1.Ilkbahar"<<endl;
    cout<<"2.Yaz"<<endl;
    cout<<"3.Sonbahar"<<endl;
    cout<<"4.Kis"<<endl;

    cin>>secim;


	switch (secim) {

		case 1 :cout<<"Hava cok guzel..."; break;
		case 2 :cout<<"Hava cok sicak..."; break;
		case 3 :cout<<"Hava yagmurlu..."; break;
		case 4 :cout<<"Hava karli..."; break;
		default : cout<<"Lutfen 1-4 arasinda bir sayi giriniz...";

	}


    return 0;
}
