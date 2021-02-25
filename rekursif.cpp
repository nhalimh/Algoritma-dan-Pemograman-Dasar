#include <iostream>
using namespace std;

// contoh fungsi rekursif terbatas

int pangkatIterasi(int r, int s){
	int hasil = r;
	for(int i=1; i<s; i++){
		hasil = hasil * r;
	}
	return hasil;	
}
int pangkatRekursif(int r, int s){
	
	if (s <= 1){
		cout << "Akhir dari rekursif\n" ;
		return r;
    }else{
    	cout << "Rekursif\n";
	    return r * pangkatRekursif(r, (s-1));
    }
}

int main() {
	int r;
	int s;
	cout << "angka:  ";
	cin >> r;
	cout << "Pangkat:  ";
	cin >> s;
	cout << "Hasil interasi =  " << pangkatIterasi(r,s) << endl;
	cout << "Hasil rekursif =  " << pangkatRekursif(r,s) << endl;
	
	return 0;
}
