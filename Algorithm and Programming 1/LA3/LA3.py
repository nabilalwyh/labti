print("==================================================")
print()
print("                 Data Ke-", x )
print()
print("================== Data Pasien ===================")
    print()
    nama = input("Masukkan Nama Anda            : ")
    umur = int(input("Masukkan Umur Anda            : "))
    bb = int(input("Masukkan Berat Badan (kg)     : "))
    tb = int(input("Masukkan Tinggi Badan (cm)    : "))
    print()
    print("==================================================")
    #Menggunakan aturan berdasarkan umur dan Indeks Massa Tubuh (IMT)
    imt = bb / ((tb/100) * (tb/100))
    print("Nama         :", nama)
    print("Umur         : ", umur)
    print("Berat Badan  : ", bb, ("kg"))
    print("Tinggi Badan : ", tb, ("cm"))

    if umur < 45 and imt < 22 :
        print("Tingkat Resiko Penyakit Jantung Anda: RENDAH")
    elif (umur < 45 and imt >= 22) or (umur >= 45 and imt < 22):
        print("Tingkat Resiko Penyakit Jantung Anda: SEDANG")
    else:
        print("Tingkat Resiko Penyakit Jantung Anda: TINGGI")
    
    x = x + 1
    