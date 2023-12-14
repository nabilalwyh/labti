#include <iostream>

int main() {
    // Deklarasi variabel dan pointer
    int angka;
    int* pointerAngka = &angka;
    
    std::cout << "Masukkan nilai integer" << std::endl;
    std::cin >> angka;

    // Menampilkan nilai variabel dan alamatnya
    std::cout << "Nilai variabel: " << angka << std::endl;
    std::cout << "Alamat variabel: " << &angka << std::endl;

    // Menampilkan nilai melalui pointer dan alamatnya
    std::cout << "\nNilai melalui pointer: " << *pointerAngka << std::endl;
    std::cout << "Alamat pointer: " << pointerAngka << std::endl;

    // Mengubah nilai variabel melalui pointer
    *pointerAngka = 99;

    // Menampilkan nilai variabel setelah diubah melalui pointer
    std::cout << "\nNilai variabel setelah diubah: " << angka << std::endl;

    return 0;
}