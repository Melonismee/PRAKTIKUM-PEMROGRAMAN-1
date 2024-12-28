def reverse(n):
    reversed = 0
    while n > 0:
        reversed = reversed * 10 + n % 10
        n //= 10
    return reversed

A, B = map(int, input().split())
A= reverse(A)
B= reverse(B)
C= A+B
print(reverse(C))