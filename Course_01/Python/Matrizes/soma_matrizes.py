m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))

print("Digite os valores da matriz A:")
matrizA = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matrizA[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")
matrizB = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matrizB[i][j] = int(input(f"Elemento [{i},{j}]: "))

matrizSoma = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j]

print("Matriz soma:")

for i in range(0, m):
    for j in range(0, n):
        print(f"{matrizSoma[i][j]} ", end="")
    print()