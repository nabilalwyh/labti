#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    string jurusan;
    int tahunMasuk;
};

int main() {
    int n;
    cout << "Masukkan banyak data mahasiswa: ";
    cin >> n;
    cin.ignore();

    Mahasiswa mahasiswas[n];

    for (int i = 0; i < n; ++i) {
        cout << "Masukkan Mahasiswa ke-" << i + 1 << endl;

        cout << "Nama: ";
        getline(cin, mahasiswas[i].nama);

        cout << "NIM: ";
        cin >> mahasiswas[i].nim;
        cin.ignore();

        cout << "Jurusan: ";
        getline(cin, mahasiswas[i].jurusan);

        cout << "Tahun Masuk: ";
        cin >> mahasiswas[i].tahunMasuk;
        cin.ignore();
        cout << endl;
    }

    cout << "\n--- DATA MAHASISWA ---" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Data Mahasiswa Ke-" << i + 1 << endl;
        cout << "Nama: " << mahasiswas[i].nama << endl;
        cout << "NIM: " << mahasiswas[i].nim << endl;
        cout << "Jurusan: " << mahasiswas[i].jurusan << endl;
        cout << "Tahun Masuk: " << mahasiswas[i].tahunMasuk << endl;
        cout << endl;
    }

    return 0;
}