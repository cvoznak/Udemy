n = int(input("Quantos números você vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0, n):
    vet[i] = int(input("Digite um número: "))
contagemPares = 0
print()
print("Números pares:")
for i in range(0, n):
    if vet[i] % 2 == 0:
        print(f"{vet[i]} ", end="")
        contagemPares += 1
print()
print()
print(f"Quantidade de pares = {contagemPares}")