#include <iostream>

using namespace std;
int main(){
    int angka1, angka2, tambah, selisih, kali;
    double bagi;

    cout << "---------------------------" << endl;
    cout << "    PROGRAM KALKULATOR     " << endl;
    cout << "---------------------------" << endl;
    cout << "Input nilai A: "; 
    cin >> angka1;
    cout << "Input nilai B: "; 
    cin >> angka2;
    
    tambah = angka1 + angka2;
    selisih = angka1 - angka2;
    kali = angka1 * angka2;
    bagi = static_cast<double>(angka1) / angka2;

    cout << "---------------------------" << endl;
    cout << "    HASIL PERHITUNGAN      " << endl;
    cout << "---------------------------" << endl;
    cout << angka1 << " + " << angka2 << " = " << tambah << endl;
    cout << angka1 << " - " << angka2 << " = " << selisih << endl;
    cout << angka1 << " x " << angka2 << " = " << kali << endl;
    cout << angka1 << " : " << angka2 << " = " << bagi << endl;

    return 0;
}

