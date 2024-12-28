def main():
    while True:

        print("\nPilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")
        zani = int(input("Masukkan pilihan : "))

        if zani == 1:
            satu = float(input("Masukkan nilai pertama : "))
            duwa = float(input("Masukkan nilai kedua : "))
            print(f"Hasil penjumlahan antara {satu:.2f} dengan {duwa:.2f} adalah {satu + duwa:.2f}")

        elif zani == 2:
            satu = float(input("Masukkan nilai pertama : "))
            duwa = float(input("Masukkan nilai kedua : "))
            print(f"Hasil pengurangan antara {satu:.2f} dengan {duwa:.2f} adalah {satu - duwa:.2f}")

        elif zani == 3 :
            satu = float(input("Masukkan nilai pertama : "))
            duwa = float(input("Masukkan nilai kedua : "))
            print(f"Hasil perkalian antara {satu:.2f} dengan {duwa:.2f} adalah {satu * duwa:.2f}")

        elif zani == 4 :
            satu = float(input("Masukkan nilai pertama : "))
            duwa = float(input("Masukkan nilai kedua : "))
            print(f"Hasil pembagian antara {satu:.2f} dengan {duwa:.2f} adalah {satu / duwa:.2f}")

        elif zani == 5:
            print("Terimakasih, telah menggunakan kalkulator Fadhil Syahdama Mahatma Putra")
            break
        
        else :
            print("Input anda salah, silahkan coba lagi ")


main()