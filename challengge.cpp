#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
float luas (float jari_jari, float phi){
    return phi * jariJari * jariJari; 
}
