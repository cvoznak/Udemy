n = int(input("Quantos elementos vai ter o vetor? "))

vet = [0 for x in range(n)]
somaPares = contagemPares = 0
for i in range(0, n):
    vet[i] = float(input("Digite um número: "))
    if vet[i] % 2 == 0:
        somaPares += vet[i]
        contagemPares += 1
if contagemPares == 0:
    print("Nenhum número par")
else:
    print(f"Média dos pares = {(somaPares / contagemPares):.1f}")