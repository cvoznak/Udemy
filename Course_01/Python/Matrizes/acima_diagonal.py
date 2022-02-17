m = int(input("Qual a ordem da matriz? "))
n = m

matriz = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))

soma = 0
for i in range(0, m):
    for j in range(0, n):
        if j > i:
            soma += matriz[i][j]
print(f"Soma dos elementos acima da diagonal principal = {soma}")