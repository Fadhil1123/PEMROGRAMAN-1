a, b = map(int, input().split())

i, j = a, b
while i <= b and j >= a:
    print(i, j, end="")
    if i < b or j > a:
        print(" - ", end="")
    i += 1
    j -= 1
    
i, j = a, b
while i >= b and j <= a:
    print(i, j, end="")
    if i > b or j < a:
        print(" - ", end="")
    i -= 1
    j += 1