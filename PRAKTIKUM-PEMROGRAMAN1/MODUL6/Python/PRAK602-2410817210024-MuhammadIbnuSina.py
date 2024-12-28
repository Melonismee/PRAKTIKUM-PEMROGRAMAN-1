ruangan= int(input())
zetsu= list(map(int, input().split()))

for i in range(ruangan):
    print(zetsu[i]*(i+1), end=" ")