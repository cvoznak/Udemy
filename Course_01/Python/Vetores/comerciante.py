n = int(input("Serão digitados dados de quantos produtos? "))

nome = [0 for x in range(n)]
compra = [0 for x in range(n)]
venda = [0 for x in range(n)]

for i in range(0, n):
    print(f"Produto {i + 1}:")
    nome[i] = input("Nome: ")
    compra[i] = float(input("Preço de compra: "))
    venda[i] = float(input("Preço de venda: "))
print()
contagemLucro10 = contagemLucro1020 = totalCompra = totalVenda = 0
for i in range(0, n):
    lucro = venda[i] - compra[i]
    porcentagemLucro = lucro * 100 / compra[i]
    if porcentagemLucro < 10:
        contagemLucro10 += 1
    elif 10 <= porcentagemLucro <= 20:
        contagemLucro1020 += 1
    totalCompra += compra[i]
    totalVenda += venda[i]
print(f"Lucro abaixo de 10%: {contagemLucro10}")
print(f"Lucro entre 10% e 20%: {contagemLucro1020}")
print(f"Lucro acima de 20%: {n - (contagemLucro1020 + contagemLucro10)}")
print(f"Valor total de compra: R${totalCompra:.2f}")
print(f"Valor total de venda: R${totalVenda:.2f}")
print(f"Lucro total: R${(totalVenda - totalCompra):.2f}")
