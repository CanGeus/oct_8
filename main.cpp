#include <string>
#include <iostream>

using namespace std;


int main() {

	string karakter;
	string ibu;
	int jawab;

	cout << "masukkan nama karakter !!  = ";
	getline(cin,karakter);

	cout << "masukkan nama karakter ibu !! = ";
	getline(cin,ibu);

	cout << endl << "Jawab dengan"<< endl << "- 0 untuk YA" << endl << "- 1 untuk TIDAK" << endl;
	cout << "apakah " << karakter << " ada di rumah ? " << endl;
	cin >> jawab;

	if (jawab == 0)
	{
		cout << "Jika " << karakter << " ada di rumah maka ";
		cout << "ibu " << ibu << " pergi kepasar" << endl;
	}
	else if (jawab == 1)
	{
		cout << "Jika " << karakter << " tidak ada di rumah maka ";
		cout << "ibu " << ibu <<" yang di rumah" << endl;
	}


	cin.get();
	return 0;

}