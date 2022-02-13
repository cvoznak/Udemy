x: int
soma: int

soma = 0
x = int(input("Digite o primeiro número: "))

while x != 0:
    soma += x
    x = int(input("Digite outro número: "))

print("Soma = ", soma)

N = int(input("Quantos números serão digitados? "))

soma = 0
for i in range (0, N):
    x = int(input("Digite um número: "))
    soma += x

print("SOMA = ", soma)