nilai= int(input())

jam = nilai // 3600
menit = (nilai % 3600) // 60
detik = nilai % 60

if jam >= 24:
    hari = jam // 24
    jam %= 24
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"{jam:02}:{menit:02}:{detik:02}")