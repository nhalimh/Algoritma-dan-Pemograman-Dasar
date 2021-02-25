#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float luas, phi=3.14;
    int r;
    
    cout<<"Masukan jari-jari: ";
    cin>>r;
    
    luas=phi*r*r;
    
    cout<<"Luas lingkaran = "<<luas<<endl;
    
    getch();
    
}
