distancia = int(input("Distância percorrida: "))
combustivelGasto = float(input("Combustível gasto: "))

consumoMedio = float(distancia / combustivelGasto)

print(f"Consumo médio = {consumoMedio:.3f}")