print("Digite os valores das coordenadas x e y:")
x = int(input())
y = int(input())

while x != 0 and y != 0:
    if x > 0 and y > 0:
        print("Quadrante Q1")
    elif x > 0 and y < 0:
        print("Quadrante Q4")
    elif x < 0 and y > 0:
        print("Quadrante Q2")
    elif x < 0 and y < 0:
        print("Quadrante Q3")
    print("Digite os valores das coordenadas x e y:")
    x = int(input())
    y = int(input())