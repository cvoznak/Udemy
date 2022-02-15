tempo = int(input("Digite a quantidade de minutos: "))

if tempo <= 100:
    valor = 50
else:
    valor = 50 + (tempo - 100) * 2

print(f"Valor a pagar: R$ {valor:.2f}")