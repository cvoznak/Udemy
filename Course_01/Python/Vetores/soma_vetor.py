n = int(input("Quantos números você vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = float(input("Digite um número: "))
soma = 0
print()
print("Valores = ", end="")
for i in range(0, n):
    print(f"{vet[i]} ", end="")
    soma += vet[i]
print()
print(f"SOMA = {soma:.2f}")
print(f"MÉDIA = {(soma / n):.2f}")