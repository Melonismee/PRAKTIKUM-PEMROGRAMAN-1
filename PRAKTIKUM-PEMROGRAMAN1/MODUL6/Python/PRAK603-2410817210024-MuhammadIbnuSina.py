n1, n2 = map(int, input().split())

if n1!=n2:
    print("Jumlah tidak sama")
else:
    matriksa = list(map(int, input().split()))
    matriksb = list(map(int, input().split()))

    for i in range (n1):
        print(matriksa[i] * matriksb[i], end=" ")