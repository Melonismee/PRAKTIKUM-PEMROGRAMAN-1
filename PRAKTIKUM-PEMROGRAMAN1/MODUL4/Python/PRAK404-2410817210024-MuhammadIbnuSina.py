while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    program = int(input("Masukkan pilihan: "))

    if 1 <= program <= 4:
        n1 = float(input("Masukkan nilai pertama: "))
        n2 = float(input("Masukkan nilai kedua: "))

        if program == 1:
            print(f"Hasil penjumlahan antara {n1:.2f} dan {n2:.2f} adalah {n1 + n2:.2f}")
        elif program == 2:
            print(f"Hasil pengurangan antara {n1:.2f} dan {n2:.2f} adalah {n1 - n2:.2f}")
        elif program == 3:
            print(f"Hasil perkalian antara {n1:.2f} dan {n2:.2f} adalah {n1 * n2:.2f}")
        elif program == 4:
            if n2 != 0:
                print(f"Hasil pembagian antara {n1:.2f} dan {n2:.2f} adalah {n1 / n2:.2f}")
            else:
                print("Pembagian tidak dapat dilakukan.")
    elif program == 5:
        print("Terima kasih telah menggunakan kalkulator Ibnu")
        break
    else:
        print("Input Anda salah, silakan coba lagi.")