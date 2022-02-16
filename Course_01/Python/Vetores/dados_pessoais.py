n = int(input("Quantas pessoas serão digitadas? "))

altura = [0 for x in range(n)]
genero = [0 for x in range(n)]

for i in range(0, n):
    altura[i] = float(input(f"Altura da {i + 1}a pessoa: "))
    genero[i] = input(f"Genero da {i + 1}a pessoa: ")

menorAltura = maiorAltura = altura[0]
somaAlturasMulheres = contagemMulheres = 0

for i in range(0, n):
    if menorAltura > altura[i]:
        menorAltura = altura[i]
    if maiorAltura < altura[i]:
        maiorAltura = altura[i]
    if genero[i] == "F":
        somaAlturasMulheres += altura[i]
        contagemMulheres += 1
print(f"Menor altura = {menorAltura}")
print(f"Maior altura = {maiorAltura}")
print(f"Média das alturas das mulheres = {(somaAlturasMulheres / contagemMulheres):.2f}")
print(f"Número de homens = {n - contagemMulheres}")