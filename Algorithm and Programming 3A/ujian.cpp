#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
	string nama;
	int nim;
	string jurusan;
	int tahunMasuk;
};

bool pilihan = true;

int main(){
    //membuat object mahasiswa
	Mahasiswa mahasiswa1;
	Mahasiswa mahasiswa2;

    do {
        int pil;
        cout << "==== Program Data Mahasiswa ====" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Lihat Data Mahasiswa" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih [1-3] : ";
        cin >> pil;

        switch (pil)
        {
        case 1: 
            cout << "Masukkan nama : ";
            cin >> mahasiswa1.nama;
            
            cout << "Masukkan NIM : ";
            cin >> mahasiswa1.nim;
            
            cout << "Masukkan Jurusan : ";
            cin >> mahasiswa1.jurusan;
	
            break;
        
        case 2: 
            cout << "Informasi Mahasiswa 1 :" << endl;  
            cout << "Nama : " << mahasiswa1.nama << endl;
            cout << "NIM : " << mahasiswa1.nim << endl;
            cout << "Jurusan : " << mahasiswa1.jurusan << endl;

            break;

        case 3 : 
            pilihan = false;
        
                
        default:
            cout << "Terimakasih" << endl;
            break;
        }
    } while (pilihan);

    return 0;
}