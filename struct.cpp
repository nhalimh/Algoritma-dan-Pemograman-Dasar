#include <iostream>
#include <string>
using namespace std;

//Struct adalah data yang dibetuk oleh beberapa data (variabel)

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main() {
	
	buah melon;
	buah pisang;
	
	melon.warna = "Hijau";
	melon.berat = 500.75f;
	melon.harga = 25000;
	melon.rasa = "Manis";

	pisang.warna = "Kuning";
	pisang.berat = 200.50f;
	pisang.harga = 10000;
	pisang.rasa = "Manis";
	
	cout << "Buah Melon :" << endl<< endl;
	cout << melon.warna << endl << endl;
	cout << melon.berat << endl << endl;
	cout << melon.harga << endl << endl;
	cout << melon.rasa <<  endl << endl;

	cout << "Buah Pisang:" << endl<< endl;
	cout << pisang.warna << endl << endl;
	cout << pisang.berat << endl << endl;
	cout << pisang.harga << endl << endl;
	cout << pisang.rasa <<  endl << endl;


	cin.get();
	return 0;
}
