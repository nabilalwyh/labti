#include <iostream>

// Deklarasi fungsi
double hitungLuasSegitiga(double alas, double tinggi);

int main() {
    // Meminta input dari pengguna
    double alas, tinggi;
    std::cout << "Masukkan panjang alas segitiga: ";
    std::cin >> alas;
    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    // Memanggil fungsi untuk menghitung luas segitiga
    double luas = hitungLuasSegitiga(alas, tinggi);

    // Menampilkan hasil
    std::cout << "Luas segitiga: " << luas << std::endl;

    return 0;
}

// Implementasi fungsi untuk menghitung luas segitiga
double hitungLuasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi; // Rumus luas segitiga: 0.5 * alas * tinggi
}
