print("Digite dois números inteiros:")
a = int(input())
b = int(input())

if a > b:
    temp = b
    b = a
    a = temp

if b % a == 0:
    print("São multiplos")
else:
    print("Não são multiplos")