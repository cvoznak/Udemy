preco = float(input("Preço unitário do produto: "))
qtd = int(input("Quantidade comprada: "))
recebido = float(input("Dinheiro recebido: "))

troco = recebido - (preco * qtd)

if troco >= 0:
    print(f"TROCO = R$ {troco:.2f}")

else:
    print(f"Dinheiro insucifient. Faltam R$ {(troco * (-1)):.2f}")