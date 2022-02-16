n = int(input("Quantas pessoas você vai digitar? "))

nome = [0 for x in range(n)]
idade = [0 for x in range(n)]

for i in range(0, n):
    print(f"Dados da {(i + 1)}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))
print("Pessoa mais velha: ", end="")
maisVelho = idade[0]
nomeMaisVelho = nome[0]
for i in range(0, n):
    if maisVelho < idade[i]:
        maisVelho = idade[i]
        nomeMaisVelho = nome[i]
print(nomeMaisVelho)