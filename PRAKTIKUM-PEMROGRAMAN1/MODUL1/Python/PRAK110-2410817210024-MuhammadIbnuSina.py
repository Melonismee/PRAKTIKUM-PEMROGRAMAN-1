import math
alas=5
tinggi=12
miring=math.sqrt(alas**2+tinggi**2)
keliling=tinggi+miring+alas
luas=0.5*alas*tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print("\nJawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {miring:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")