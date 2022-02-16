n = int(input("Quantas pessoas serão digitadas? "))

nome = [0 for x in range(n)]
idade = [0 for x in range(n)]
altura = [0 for x in range(n)]

for i in range(0, n):
    print(f"Dados da {(i + 1)}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
    altura[i] = float(input("Altura: "))
soma = contagemMenos16 = 0
for i in range(0, n):
    soma += altura[i]
    if idade[i] < 16:
        contagemMenos16 += 1
print()
print(f"Altura média: {(soma / n):.2f}")
print(f"Pessoas com menos de 16 anos: {(contagemMenos16 * 100 / n):.1f}%")
for i in range(0, n):
    if idade[i] < 16:
        print(nome[i])
