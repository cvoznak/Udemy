salario = float(input("Digite o salário da pessoa: "))

if salario <= 1000:
    aumento = 20
elif 1000 < salario <= 3000:
    aumento = 15
elif 3000 < salario <= 8000:
    aumento = 10
else:
    aumento = 5

print(f"Novo salário = R$ {salario + salario * (aumento / 100)}")
print(f"Aumento = R$ {salario * (aumento / 100)}")
print(f"Porcentagem = {aumento} %")



