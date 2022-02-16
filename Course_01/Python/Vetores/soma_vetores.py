n = int(input("Quantos valores vai ter cada vetor? "))

vetA = [0 for x in range(n)]
vetB = [0 for x in range(n)]
vetSoma = [0 for x in range(n)]

print("Digite os valores do vetor A:")
for i in range(0, n):
    vetA[i] = int(input())

print("Digite os valores do vetor B:")
for i in range(0, n):
    vetB[i] = int(input())

for i in range(0, n):
    vetSoma[i] = vetA[i] + vetB[i]

print("Vetor resultante:")
for i in range(0, n):
    print(vetSoma[i])
