print("bom dia", end ="")
print("boa noite")

print("bon dia")
print("boa noite")

x: int; y: int
x = 10
y = 20
print(x)
print(y)

k: float
k = 2.3456
print("{:.2F}".format(x))

idade: int
salario: float
nome: str
sexo: str

idade = 32
salario = 4560.9
nome = "Maria Silva"
sexo = "F"

print(f"A funcionária {nome}, sexo {sexo}, ganha {salario:.2f} e tem {idade} anos.")
print("A funcionária {:s}, sexo {:s}, ganha {:.2f} e tem {:d} anos.".format(nome, sexo, salario, idade))

print("É um {} teste {}".format(nome, salario))