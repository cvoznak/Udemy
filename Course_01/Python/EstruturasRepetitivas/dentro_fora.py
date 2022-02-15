n = int(input("Quantos números você vai digitar? "))
dentro = 0
for i in range(0, n):
    x = int(input("Digite um número: "))
    if 10 <= x <= 20:
        dentro +=1
print(f"{dentro} DENTRO")
print(f"{n - dentro} FORA")