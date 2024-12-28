changli = int(input())
zetsu = list(map(int, input().split()))

for a in range(changli):
    print(zetsu[a] * (a + 1), end=" ")