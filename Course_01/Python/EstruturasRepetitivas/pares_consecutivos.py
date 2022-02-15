n = int(input("Digite um número inteiro: "))
if n % 2 != 0:
    n = n + 1
soma = 0

while n != 0:
    for i in range(0, 5):
        soma += n
        n = n + 2
    print(f"SOMA = {soma}")
    n = int(input("Digite um número inteiro: "))
    if n % 2 != 0:
        n = n + 1
    soma = 0

