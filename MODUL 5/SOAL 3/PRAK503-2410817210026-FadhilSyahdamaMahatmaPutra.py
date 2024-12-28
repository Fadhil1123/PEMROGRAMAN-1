def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b
    
maks = -100000
minim = 100000

bilangan = int(input())  
nilai = list(map(int, input().split()))

for n in nilai:
    maks = maksimal(maks, n)
    minim = minimal(minim, n)

print(maks, minim)