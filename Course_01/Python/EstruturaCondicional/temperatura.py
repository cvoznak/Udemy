entrada = input("Você vai digitar a temperatura em qual escala (C/F)? ")

if entrada == 'F':
    fahrenheit = float(input("Digite a temperatura em Fahrenheit: "))
    c = (5 / 9) * (fahrenheit - 32)
    print(f"Temperatura equivalente em Celsius: {c:.2f}")
elif entrada == 'C':
    celsius = float(input("Digite a temperatura em Celsius: "))
    f = (9 / 5) * celsius + 32
    print(f"Temperatura equivalente em Fahrenheit: {f:.2f}")