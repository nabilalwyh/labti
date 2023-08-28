import Fibonacci
import Faktorial

def main():
    pilih =0
    while pilih != 3:
        print("\n1. Faktorial")
        print("2. Fibonacci")
        print("3. Exit")
        pilih = int(input("Pilih menu: "))
        if pilih == 1:
            print("=== Faktorial ===")
            n = int(input('Masukkan nilai n: '))
            print(f'{n}! = {Faktorial.faktor(n)}')

        elif pilih == 2:
            print("=== Fibonacci ===")
            n = int(input('Masukkan nilai n: '))
            f = Fibonacci.fibo(n)
            print(f'suku ke-{n} dari barisan Fibonacci: {f}')    

        elif pilih == 3:
           print ("Selamat Tinggal!")

        else:
           print ("Anda salah memasukkan nomor")

main()

