a = float(input("Digite a medida A: "))
b = float(input("Digite a medida B: "))
c = float(input("Digite a medida C: "))

areaQuadrado = a ** 2
areaTriangulo = a * b / 2
areaTrapezio = (a + b) * c / 2

print(f"Área do quadrado = {areaQuadrado:.4f}")
print(f"Área do triângulo = {areaTriangulo:.4f}")
print(f"Área do trapézio = {areaTrapezio:.4f}")