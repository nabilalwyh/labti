def main():

    print("\n=== Data Mahasiswa ===")
    jmlh = int(input("Banyaknya file: "))
    for ulang in range(1, jmlh + 1):
        print()
        print("Input nama file [<nama>.txt/dat]: ")
        namafile = input(f"file ke-{ulang}: ")
        print()
        with open(namafile, "a") as data:
            print("Data Mahasiswa ke-", ulang)
            nama = input("Masukka Nama : ")
            kelas = input("Masukkan Kelas : ")
            npm = input("Masukkan Npm : ")
            uts = int(input("Masukkan NIlai UTS : "))
            uu = int(input("Masukkan Nilai UU : "))
            uas = int(input("Massukkan Nilai UAS : "))
            total = (uts+uu+uas) / 3

            data.write("=== Data Mahasiswa ===\n")
            data.write("Nama Anda   : " + nama + '\n')
            data.write("Kelas Anda  : " + kelas + '\n')
            data.write("NPM Anda    : " + npm + '\n')
            data.write("Total Nilai Ujian Anda :" + str(total) + '\n')
            if total >= 80:
                data.write("A\n")
            elif total >= 70:
                data.write("B\n")
            elif total >= 55:
                data.write("C\n")
            elif total >= 40:
                data.write("D\n")
            elif total <= 39:
                data.write("E\n")
            if total <= 50:
                data.write("KETERANGAN : GAGAL\n")
            else:
                data.write("KETERANGAN : LULUS\n")
            data.write('\n')
            print()
    print("Data berhasil dibuat")
    print("\n=== Membaca isi file ===")
    for ulang in range(1, jmlh + 1):
        try:
            nama_file = input("Masukkan nama file yang tela dibuat: ")
            infile = open(nama_file,"r")
            isi_file = infile.read()
            print(isi_file)
            infile.close
        except FileNotFoundError:
            print("file tidak ditemukan.\n")
main()