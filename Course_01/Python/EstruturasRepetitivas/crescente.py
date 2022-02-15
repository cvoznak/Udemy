print("Digite dois números: ")
a = int(input())
b = int(input())

while a != b:
    if a < b:
        print("Crescente!")
    else:
        print("Decrescente!")
    print("Digite outros dois números:")
    a = int(input())
    b = int(input())