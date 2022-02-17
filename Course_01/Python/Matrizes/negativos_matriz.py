m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))

matriz = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))
print("Maior elemento de cada linha:")
for i in range(0, m):
    for j in range(0, n):
        if matriz[i][j] < 0:
            print(matriz[i][j])
