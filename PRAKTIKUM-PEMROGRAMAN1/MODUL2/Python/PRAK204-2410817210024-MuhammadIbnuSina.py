jari=float(input())
tinggi=float(input())

volume= 22/7 * jari**2 *tinggi
luas=2* 22/7 *jari*(jari+tinggi)
keliling=2* 22/7 *jari

print(f"Volume : {volume:.2f}")
print(f"Luas : {luas:.2f}")
print(f"Keliling : {keliling:.2f}")

jari1, tinggi1 = map(float, input().split())

volume1= 22/7 * jari1**2 *tinggi1
luas1=2* 22/7 *jari1*(jari1+tinggi1)
keliling1=2* 22/7 *jari1

print(f"Volume : {volume1:.2f}")
print(f"Luas : {luas1:.2f}")
print(f"Keliling : {keliling1:.2f}")