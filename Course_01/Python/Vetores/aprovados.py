n = int(input("Quantos alunos serão digitados? "))

nome = [0 for x in range(n)]
media = [0 for x in range(n)]

for i in range(0, n):
    print(f"Digite nome, primeira e segunda nota do {i + 1}o aluno:")
    nome[i] = input()
    n1 = float(input())
    n2 = float(input())
    media[i] = (n1 + n2) / 2

print("Alunos aprovados:")
for i in range(0, n):
    if media[i] >= 6:
        print(nome[i])