#include <iostream>
#include <cmath>

using namespace std;

double luasLingkaran(double r);
double kelilingLingkaran(double r);

int main()
{

       double r;
       cout << "Masukkan jari-jari: ";
       cin >> r;
    
       double luas = luasLingkaran(r);
       double keliling = kelilingLingkaran(r);
    
       cout << "Luas Lingkaran: " << luas << endl;
       cout << "Keliling Lingkaran: " << keliling;

    return 0;
}

double luasLingkaran(double r)
{
    return M_PI * r * r;
}

double kelilingLingkaran(double r)
{
    return 2 * M_PI * r;
}