pozem, changli = map(int, input().split())

if pozem != changli:
    print("Jumlah tidak sama")
    exit()

x = list(map(int, input().split()))
y = list(map(int, input().split()))

for i in range(pozem):
    print(x[i] * y[i], end=" ")