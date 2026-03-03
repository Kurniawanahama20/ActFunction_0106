//library
#include <iostream>
using namespace std;

//deklarasi global
int p, l;

//implementasi prosedur dan fungsi
void input() {
    cout << "masukkan panjang =";
    cin >> p;
    cout << "masukkan lebar =";
    cin >> l;
}

float jumlah(float a, float b,float c) {
    return a + b + c;
}

int luaspersegiP(int a, int b){
    return a * b;
}

void output(){
    cout << "hasilnya =" << luaspersegiP(p, 1) << endl;
    cout << "terima kasih" << endl;
}