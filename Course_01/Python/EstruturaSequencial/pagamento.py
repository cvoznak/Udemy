nome = input("Nome: ")
valorHora = float(input("Valor por hora: "))
horasTrabalhadas = int(input("Horas trabalhadas: "))

pagamento = float(valorHora * horasTrabalhadas)

print(f"O pagamento para {nome} deve ser de R$ {pagamento:.2f}")