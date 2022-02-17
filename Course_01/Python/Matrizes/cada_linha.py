m = int(input("Qual a ordem da matriz? "))
n = m

matriz = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))
print("Maior elemento de cada linha:")
for i in range(0, m):
    maior = matriz[i][0]
    for j in range(0, n):
        if maior < matriz[i][j]:
            maior = matriz[i][j]
    print(maior)