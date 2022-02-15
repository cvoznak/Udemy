cod = int(input("Informe um código (1, 2, 3) ou 4 para parar: "))
conte1 = 0
conte2 = 0
conte3 = 0

while cod != 4:
    match cod:
        case 1:
            conte1 += 1
        case 2:
            conte2 += 1
        case 3:
            conte3 += 1
    cod = int(input("Informe um código (1, 2, 3) ou 4 para parar: "))

print("MUITO OBRIGADO")
print(f"Alcool: {conte1}")
print(f"Gasolina: {conte2}")
print(f"Diesel: {conte3}")