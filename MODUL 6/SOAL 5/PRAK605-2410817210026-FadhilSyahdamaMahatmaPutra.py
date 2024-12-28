def kafka(ordo):
    matriks = []
    for i in range(ordo):
        row = list(map(int, input().split()))
        matriks.append(row)
    return matriks

def makima(matriks, ordo):
    for i in range(ordo):
        for j in range(ordo):
            print(matriks[i][j], end=" ")
        print()

def x(matriks1, matriks2, ordo):
    hasil = [[0 for _ in range(ordo)] for _ in range(ordo)]  
    for i in range(ordo):
        for j in range(ordo):
            for k in range(ordo):
                hasil[i][j] += matriks1[i][k] * matriks2[k][j]
    return hasil

ordo = int(input())

print("Matriks A")
matriks1 = kafka(ordo)

print("Matriks B")
matriks2 = kafka(ordo)

hasil = x(matriks1, matriks2, ordo)

print("Matriks AXB")
makima(hasil, ordo)