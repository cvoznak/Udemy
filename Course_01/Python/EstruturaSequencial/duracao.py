seg = int(input("Digite a duração em segundos: "))

hora = seg // 3600
min = (seg % 3600) // 60
seg = ((seg % 3600) % 60)

print(F"{hora}:{min}:{seg}")