m = int(input("Qual a ordem da matriz? "))
n = m

matriz = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    for j in range(0, n):
        matriz[i][j] = float(input(f"Elemento [{i},{j}]: "))

somaPositivos = 0
for i in range(0, m):
    for j in range(0, n):
        if matriz[i][j] > 0:
            somaPositivos += matriz[i][j]
print()
print(f"Soma dos positivos: {somaPositivos:.1f}")
print()
linha = int(input("Escolha uma linha:"))
print(f"Linha escolhida: ", end="")
for j in range(0, n):
    print(f"{matriz[linha][j]:.1f} ", end="")
print()
print()
coluna = int(input("Escolha uma coluna:"))
print(f"Coluna escolhida: ", end="")
for i in range(0, n):
    print(f"{matriz[i][coluna]:.1f} ", end="")
print()
print()
print(f"Diagonal principal: ", end="")
for i in range(0, n):
    print(f"{matriz[i][i]:.1f} ", end="")
print()
print()
print("Matriz Alterada:")
matrizAlterada = [[0 for x in range(n)] for x in range(m)]
for i in range(0, m):
    for j in range(0, n):
        if matriz[i][j] < 0:
            matrizAlterada[i][j] = matriz[i][j] ** 2
        else:
            matrizAlterada[i][j] = matriz[i][j]
for i in range(0, m):
    for j in range(0, n):
        print(f"{matrizAlterada[i][j]:.1f} ", end="")
    print()