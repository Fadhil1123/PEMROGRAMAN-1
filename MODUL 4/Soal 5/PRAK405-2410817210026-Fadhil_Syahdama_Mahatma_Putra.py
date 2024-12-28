zani, bocchi = map(int, input().split())

total = 0

for i in range(1, zani + 1):
    hasil = 0

    for j in range(i, 0, -1):
        hasil += j * bocchi
        print(f"({j}*{bocchi})", end="")
        if j > 1:
            print(" + ", end="")

    print(f" = {hasil}")
    total += hasil
print(total)