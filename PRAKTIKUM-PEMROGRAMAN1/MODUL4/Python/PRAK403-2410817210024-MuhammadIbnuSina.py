a, b = map(int, input().split())

if a < b:
    for i, j in zip(range(a, b + 1), range(b, a - 1, -1)):
        print(f"{i} {j}", end="")
        if i < b:
            print(" - ", end="")
elif a > b:
    for i, j in zip(range(a, b - 1, -1), range(b, a + 1)):
        print(f"{i} {j}", end="")
        if i > b:
            print(" - ", end="")