// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

//implementasi prosedur dan fungsi
void input() {
    cout << "masukan panjang =";
    cin >> p;
    cout << "masukan lebar =";
    cin >> l;
}

int luaspersegi(){
    return p * l;
}

void output(){
    cout << "hasilnya = " << luaspersegi() << endl;
    cout << "terima kasih";
}