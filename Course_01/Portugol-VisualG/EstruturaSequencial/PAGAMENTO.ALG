Algoritmo "pagamento"

Var

nome : caracter
valorh, horas, pag : real

Inicio

escreva("Nome: ")
leia(nome)
escreva("Valor por hora: ")
leia(valorh)
escreva("Horas trabalhadas: ")
leia(horas)

pag <- valorh * horas

escreva("O pagamento para ", nome, " deve ser ", pag:8:2)

Fimalgoritmo