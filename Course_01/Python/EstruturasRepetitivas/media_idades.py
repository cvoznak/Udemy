print("Digite as idades:")
idade = int(input())
if idade < 0:
    print("Impossível calcular")
else:
    soma = 0
    contagem = 0

    while idade > 0:
        soma += idade
        contagem += 1
        idade = int(input())

    media = soma / contagem

    print(f"Média = {media:.2f}")
