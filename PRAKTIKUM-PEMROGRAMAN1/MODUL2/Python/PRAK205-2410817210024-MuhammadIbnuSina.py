import math

a, c = map(int, input().split())

b=math.sqrt(c*c-a*a)
keliling=a+b+c
luas=0.5*b*a

print(f"Alas= {int(b)} cm")
print(f"Tinggi= {int(a)} cm")
print(f"Keliling= {int(keliling)} cm")
print(f"Luas= {int(luas)} cm^2")

a1=int(input())
c1=int(input())

b1=math.sqrt(c1*c1-a1*a1)
keliling1=a1+b1+c1
luas1=0.5*b1*a1

print(f"Alas= {int(b1)} cm")
print(f"Tinggi= {int(a1)} cm")
print(f"Keliling= {int(keliling1)} cm")
print(f"Luas= {int(luas1)} cm^2")