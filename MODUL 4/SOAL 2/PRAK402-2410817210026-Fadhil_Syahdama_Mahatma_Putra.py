botan = int(input())

for i in range(1, botan + 1, 2):
    print(i, end=' ')

print()

if botan % 2 == 0:
    for i in range(botan, 1, -2):
        print(i, end=' ')
else:
    for i in range(botan - 1, 1, -2):
        print(i, end=' ')