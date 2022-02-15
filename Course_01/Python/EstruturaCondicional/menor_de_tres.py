a = int(input("Primeiro valor: "))
b = int(input("Segundo valor: "))
c = int(input("Terceiro valor: "))

menor = a

if menor > b:
    menor = b
elif menor > c:
    menor = c

print(f"Menor = {menor}")