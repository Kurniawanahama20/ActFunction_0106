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

int main() { //mulai
    input();
    output();
    cout << "hasil penjumlahan =" << jumlah(15.1, 24.9, 67);
} //selesai