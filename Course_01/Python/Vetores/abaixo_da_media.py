n = int(input("Quantos elementos vai ter o vetor? "))

vet = [0 for x in range(n)]
soma = 0
for i in range(0, n):
    vet[i] = float(input("Digite um número: "))
    soma += vet[i]
media = soma / n
print()
print(f"Média do vetor = {media:.3f}")
print("Elementos abaixo da média")
for i in range(0, n):
    if vet[i] < media:
        print(vet[i])