#include <iostream>
using namespace std;

//contoh overloading
//overloading = menimpa

//fungsi basic
int luas_Kotak (int panjang, int lebar){
	int luas = panjang * lebar;
	return luas;
}

//fungsi overloading
int luas_kotak(int sisi){
	int luas = sisi * sisi;
	return luas;
}

double luas_kotak(double sisi){
	return sisi * sisi;
}

int main() { 
	cout << "luas kotak 4x5 :  " << luas_kotak(4.5) << endl;
	cout << "luas kotak 4x4 :  " << luas_kotak(4) << endl;
	cout << "luas kotak 4.6 x 4.6 :  " << luas_kotak(4.6) << endl;
	return 0;
}
