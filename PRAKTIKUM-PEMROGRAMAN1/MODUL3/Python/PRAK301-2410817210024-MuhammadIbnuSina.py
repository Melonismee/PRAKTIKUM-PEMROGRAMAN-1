a, b, c = map(int, input().split())

if a <= b and a <= c:
    if b <= c:
        print(f"{a} {b} {c}")
    else:
        print(f"{a} {c} {b}")
elif b <= a and b <= c:
    if a <= c:
        print(f"{b} {a} {c}")
    else:
        print(f"{b} {c} {a}")
else:
    if a <= b:
        print(f"{c} {a} {b}")
    else:
        print(f"{c} {b} {a}")