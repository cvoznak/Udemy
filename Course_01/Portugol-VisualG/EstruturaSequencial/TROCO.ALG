Algoritmo "troco"


Var

   precoUni, qtd, rec, troco : real

Inicio

   escreva("Pre�o unit�rio do produto: ")
   leia(precoUni)
   escreva("Quantidade comprada: ")
   leia(qtd)
   escreva("Dinheiro recebido: ")
   leia(rec)

   troco <- rec - (precoUni * qtd)
   
   escreva("TROCO = ",troco:6:2)

Fimalgoritmo