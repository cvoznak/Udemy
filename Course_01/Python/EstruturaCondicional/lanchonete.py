cod = int(input("Código do produto comprado: "))
preco: float
match cod:
    case 1:
        preco = 5
    case 2:
        preco = 3.5
    case 3:
        preco = 4.8
    case 4:
        preco = 8.9
    case 5:
        preco = 7.32
    case _:
        preco = 0

qtd = int(input("Quantidade comprada: "))
total = float(qtd * preco)
print (f"Valor a pagar: R$ {total:.2f}")
