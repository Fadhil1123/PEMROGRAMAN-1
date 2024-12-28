inputs = []
while True:
    line = input()
    if not line:
        break
    inputs.extend(line.split())

inputs = list(map(float, inputs))

a, b = inputs
volume = float(22.0/7.0 * a * a * b)
luas = float(2.0 * 22.0/7.0 * a * (a + b))
kelilinng = float(2.0 * 22.0/7.0 *a)

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {kelilinng:.2f}")