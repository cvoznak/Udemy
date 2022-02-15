n = int(input("Quantos números você vai digitar? "))

for i in range(0, n):
    x = int(input("Digite um número: "))
    if x == 0:
        print("NULO")
    elif x > 0:
        if x % 2 == 0:
            print("PAR POSITIVO")
        else:
            print("IMPAR POSITIVO")
    else:
        if x % 2 == 0:
            print("PAR NEGATIVO")
        else:
            print("IMPAR NEGATIVO")