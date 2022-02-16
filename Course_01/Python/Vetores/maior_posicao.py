n = int(input("Quantos números você vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = float(input("Digite um número: "))

maior = vet[0]
posicao = 0
for i in range(0, n):
    if maior < vet[i]:
        maior = vet[i]
        posicao = i
print()
print(f"MAIOR VALOR = {maior}")
print(f"Posição do maior valor = {posicao}")