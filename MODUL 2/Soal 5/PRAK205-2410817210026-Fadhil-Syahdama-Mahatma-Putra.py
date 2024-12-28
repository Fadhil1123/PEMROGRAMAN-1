import math
inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

a, b= inputs

c = math.sqrt ( b*b - a*a)

print(f"Alas = {c:.0f} cm")
print(f"Tinggi = {a:.0f} cm")
print(f"Keliling = {a + b + c:.0f} cm")
print(f"Luas = {a * c * 0.5:.0f} cm^2")