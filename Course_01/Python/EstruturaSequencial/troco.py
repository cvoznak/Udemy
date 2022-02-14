precoUnitario = float(input("Preço unitário do produto: "))
qtd = int(input("Quantidade comprada: "))
recebido = float(input("Dinheiro recebido: "))

troco = recebido - float(precoUnitario * qtd)

print(f"TROCO = R$ {troco:.2f}")