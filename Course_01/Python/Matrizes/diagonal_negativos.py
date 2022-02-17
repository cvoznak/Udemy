m = int(input("Qual a ordem da matriz? "))

matriz = [[0 for x in range(m)] for x in range(m)]

for i in range(0, m):
    for j in range(0, m):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Diagonal principal: ")

for i in range(0, m):
    print(f"{matriz[i][i]} ", end="")
print()
contagem = 0
for i in range(0, m):
    for j in range(0, m):
        if matriz[i][j] < 0:
            contagem += 1

print(f"Quantidade de negativos = {contagem}")