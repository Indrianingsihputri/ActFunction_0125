#include <iostream>
using namespace std;

int panjang, lebar;

void input() 
{
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

int LuasPersegi()
{
    return panjang * lebar;
}

void output()
{
    cout << "Hasilnya : " << LuasPersegi() << endl;
}

int main()
{
    input();
    output();
}