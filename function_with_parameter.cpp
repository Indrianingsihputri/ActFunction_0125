#include <iostream>
using namespace std;

int panjang, lebar;

void input() {
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

int LuasPersegi(int a, int b) {
    return a * b;
}


int kelilingPersegi(int a, int b) {
    return 2 * (a + b);
}

void output() {
    cout << "Luasnya : " << LuasPersegi(panjang, lebar) << endl;
}

int main() {
    input();
    output();
    cout << "Kelilingnya : " << kelilingPersegi(panjang, lebar) << endl;
}