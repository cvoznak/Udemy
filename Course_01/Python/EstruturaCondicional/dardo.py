print("Digite as três distâncias: ")
a = float(input())
b = float(input())
c = float(input())

maior = a

if maior < b:
    maior = b
elif maior < c:
    maior = c

print(f"MAIOR DISTÂNCIA = {maior:.2f}")