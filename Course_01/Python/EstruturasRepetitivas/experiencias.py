n = int(input("Quantos casos serão digitados? "))
contagemC = 0
contagemR = 0
contagemS = 0
for i in range(0, n):
    qtd = int(input("Quantidade de cobaias: "))
    tipo = input("Tipo de cobaia: ")
    if tipo == "C":
        contagemC += qtd
    elif tipo == "R":
        contagemR += qtd
    elif tipo == "S":
        contagemS += qtd
total = contagemC + contagemR + contagemS
print("Relatório final:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {contagemC}")
print(f"Total de ratos: {contagemR}")
print(f"Total de sapos: {contagemS}")
print(f"Percentual de coelhos: {contagemC * 100 / total:.2f}%")
print(f"Percentual de ratos: {contagemR * 100 / total:.2f}%")
print(f"Percentual de sapos: {contagemS * 100 / total:.2f}%")
