m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))

matriz = [[0 for x in range(n)] for x in range(m)]

for i in range(0, m):
    print(f"Digite os elementos da {i+1}a. linha:")
    for j in range(0, n):
        matriz[i][j] = float(input())

vetor = [0 for x in range(m)]
soma = 0
for i in range(0, m):
    for j in range(0, n):
        soma += matriz[i][j]
    vetor[i] = soma
    soma = 0
print("Vetor gerado:")
for i in range(0, m):
    print(vetor[i])