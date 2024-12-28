boc, chi = map(int, input().split())

elements = list(map(int, input().split()))
matriks = [elements[i:i+chi] for i in range(0, len(elements), chi)]

for row in matriks:
    print(" ".join(map(str, row)))