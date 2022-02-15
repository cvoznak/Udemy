print("Digite dois números:")
x = int(input())
y = int(input())
soma = 0

if x > y:
    temp = y
    y = x
    x = temp

if x % 2 == 0:
    x += 1
else:
    x += 2
for i in range (x, y, 2):
    soma += i
print(f"SOMA DOS IMPARES = {soma}")
